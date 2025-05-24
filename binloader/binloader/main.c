/*
*
*	Spreadtrum binloader
*
*	©2025 Bogdan Nikolaev. All rights reserved.
*
*	Special thanks to Ilya_ZX
*/

// Binloader uses reduced, statically linked with binary function table
#include <api.h>

#define LIBRUNTIME_LOCATION u"libruntime.so"
#define DISK_SYSTEM u"D:/"
#define DISK_CARD u"E:/"

// We hijack global variable from web browser.
#define LOAD_ADDRESS_VARIABLE 0x46F9224 // 0x46C37F0
#define STATE_VARIABLE 0x46C37F4

#define STATE_NUMBER 0xCAFEBABE

#define CreateDebugFile(str) FileClose(FileOpen(str, FILE_CREATE, 0, 0));

// Note: binloader shouldn't use global variables at all, only stack and register. libruntime, therefore, can use global variables.

int HandleBoxmanWinMsgHook(uint32 window, uint32 msgId, uint32 dparam)
{
	uint32 readBytes = 0;
	uint32 handle;
	
	void** loadAddr = (void**)LOAD_ADDRESS_VARIABLE; // Also filemanager put absolute path to binary here
	unsigned int* stateVariable = (unsigned int*)STATE_VARIABLE;
	
	if(msgId == MSG_CLOSE_WINDOW || msgId == MSG_KEYDOWN_CANCEL || msgId == MSG_CTL_CLOSE)
	{
		MMKCloseWin(window);
		*stateVariable = 0;
	}
	
	// FIT IN 294 BYTES!!!
	if(*stateVariable != STATE_NUMBER)
	{
		// Initialization state: Load runtime from E:/rt.so to memory, store it's address into some global variable.
		wchar_t* str = (wchar_t*)loadAddr;
		
		handle = FileOpen(str, 0x31, 0, 0);
		
		if(!handle)
			goto err;
		
		uint32 size = 0;
		FileGetSize(handle, &size);
		*loadAddr = Alloc(size, "m", 1);
		if(!(*loadAddr))
			goto err;
		
		FileRead(handle, *loadAddr, size, &readBytes);
		
		if(readBytes == 0)
			goto err;
		
		*stateVariable = STATE_NUMBER;
	}
	else
	{
		// Program state: MMI keep sending our hooked function events, we pass them directly to loaded program.
		// libruntime also can pass execution to another program by swapping WindowFunc with pointer to loaded program.
		LoaderContext ctx = {
			__api_table,
			loadAddr
		};
		WindowFunc func = (WindowFunc)(*loadAddr + 1); // Beware of THUMB
		
		func(&ctx, window, msgId, dparam);
	}
	
	return 1;
err:
	CreateDebugFile(u"D:/E");
	return 1;
}