
#include <api.h>

#define PATH_VARIABLE 0x46F9224 //0x46C37F0

// TODO: Make this patch more portable. Now it require manual porting for new platforms.
#define RUN_BOXMAN_GAME_PTR 0x6EA9E4
#define PATH_MAX 255

#define HEAP_BASE 0x212431C7

#define _Alloc(...) ((void*(*)( unsigned int size, unsigned int heap, char* where, unsigned int lineNumber )) 0x0043E2BC + 1)(__VA_ARGS__)

void MMIAPIEBOOK_ManagerWinMsg_4Fmm(uint8 file_dev, wchar_t* name_ptr, uint32 name_length, uint32 file_size, wchar_t* full_name_ptr, uint32 full_name_length)
{
	wchar_t* filePath = (wchar_t*)PATH_VARIABLE;
	uint32 written;
	char t[2];
	t[0] = 'd';
	t[1] = 0;
	
	int len = wstrlen(full_name_ptr) + 1;
	
	for(int i = 0; i < len; i++)
		filePath[i] = full_name_ptr[i];
	
	((void(*)()) RUN_BOXMAN_GAME_PTR + 1)(); // TODO: Pattern search of this function (it's thunk at this moment).  
}