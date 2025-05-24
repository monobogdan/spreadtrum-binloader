/*
*
*	Spreadtrum libruntime
*
*	©2025 Bogdan Nikolaev. All rights reserved.
*
*	Special thanks to Ilya_ZX
*/

#include <api.h>

void LcdClear()
{
	LcdId lcd = { 0, 0 };
	Rect rct = { 0, 0, 240, 320 };
	
	uint16* fb = ((uint16*(*)(LcdId* id)) 0x321DEA + 1)(&lcd);

	uint16 startEnd[4] = { 0, 0, 240, 320 };

	((void(*)(LcdId* lcdId, uint32 start, uint32 end, uint16 col)) 0x9701C4 + 1)(&lcd, ((uint32*)&startEnd[0])[0], ((uint32*)&startEnd[0])[1], 0xFFFF);
	
	for(int i = 0; i < 240 * 320; i++)
		fb[i] = 0xFF00;
	
	((void(*)()) 0x966378 + 1)(); // Update rect

	
	
	//((void(*)(LcdId* lcdId, Rect* rct, void* res)) 0x9662F2 + 1)(&lcd, &rct, 0); // Store update rect
}

__attribute__((section(".main")))
int WindowProc(LoaderContext* context, int window, int msgId, int dparam)
{
	LcdClear();
	
	// Send MSG
	((void(*)(uint32 window, uint32 msg, uint32 res)) 0x36A3CA + 1)(window, MSG_FULL_PAINT, 0);
	
	return 1;
}

// For poweron patch
/*int PowerOnFunctionHooked(int window, int msgId, int dparam)
{
	((void(*)()) (0x9410E0 | 1))(); // OpenIdle
	((void(*)(uint32 window)) (0x981242 | 1))(window); // MK_CloseWin
	
	return 1;
}*/