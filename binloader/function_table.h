#ifdef LOADER
__attribute__((section(".text")))
void* __api_table[] = {
(void*)(0x90FEF8 | 1), // Alloc
(void*)(0x92DEAC | 1), // wstrlen
(void*)(0x9D41AE | 1), // FileOpen
(void*)(0x9D4CD2 | 1), // FileRead
(void*)(0x9D4D1E | 1), // FileWrite
(void*)(0x9D4CA4 | 1), // FileClose
(void*)(0x9D509C | 1), // FileGetSize
(void*)(0x981242 | 1), // MMKCloseWin
};
#endif

// _addr defines needed only for patches to make them portable
#define Alloc_addr 0x90FEF8
#define Allocsig unsigned int size, char* where, unsigned int lineNumber
#ifndef PATCH
#define Alloc(...) ((void*(*)( Allocsig )) __api_table[0])(__VA_ARGS__)
#else
#define Alloc(...) ((void*(*)( Allocsig )) 0x90FEF8 + 1)(__VA_ARGS__)
#endif
#define wstrlen_addr 0x92DEAC
#define wstrlensig wchar_t* str
#ifndef PATCH
#define wstrlen(...) ((uint32(*)( wstrlensig )) __api_table[1])(__VA_ARGS__)
#else
#define wstrlen(...) ((uint32(*)( wstrlensig )) 0x92DEAC + 1)(__VA_ARGS__)
#endif
#define FileOpen_addr 0x9D41AE
#define FileOpensig wchar_t* fileName, uint32 accessMode, uint32 shareMode, uint32 fileAttributes
#ifndef PATCH
#define FileOpen(...) ((uint32(*)( FileOpensig )) __api_table[2])(__VA_ARGS__)
#else
#define FileOpen(...) ((uint32(*)( FileOpensig )) 0x9D41AE + 1)(__VA_ARGS__)
#endif
#define FileRead_addr 0x9D4CD2
#define FileReadsig uint32 handle, void* buffer, uint32 bytesToRead, uint32* bytesRead
#ifndef PATCH
#define FileRead(...) ((uint32(*)( FileReadsig )) __api_table[3])(__VA_ARGS__)
#else
#define FileRead(...) ((uint32(*)( FileReadsig )) 0x9D4CD2 + 1)(__VA_ARGS__)
#endif
#define FileWrite_addr 0x9D4D1E
#define FileWritesig uint32 handle, void* buffer, uint32 bytesToWrite, uint32* bytesWritten
#ifndef PATCH
#define FileWrite(...) ((uint32(*)( FileWritesig )) __api_table[4])(__VA_ARGS__)
#else
#define FileWrite(...) ((uint32(*)( FileWritesig )) 0x9D4D1E + 1)(__VA_ARGS__)
#endif
#define FileClose_addr 0x9D4CA4
#define FileClosesig uint32 fileHandle
#ifndef PATCH
#define FileClose(...) ((uint32(*)( FileClosesig )) __api_table[5])(__VA_ARGS__)
#else
#define FileClose(...) ((uint32(*)( FileClosesig )) 0x9D4CA4 + 1)(__VA_ARGS__)
#endif
#define FileGetSize_addr 0x9D509C
#define FileGetSizesig uint32 fileHandle, uint32* fileSize
#ifndef PATCH
#define FileGetSize(...) ((uint32(*)( FileGetSizesig )) __api_table[6])(__VA_ARGS__)
#else
#define FileGetSize(...) ((uint32(*)( FileGetSizesig )) 0x9D509C + 1)(__VA_ARGS__)
#endif
#define MMKCloseWin_addr 0x981242
#define MMKCloseWinsig uint32 windowHandle
#ifndef PATCH
#define MMKCloseWin(...) ((uint32(*)( MMKCloseWinsig )) __api_table[7])(__VA_ARGS__)
#else
#define MMKCloseWin(...) ((uint32(*)( MMKCloseWinsig )) 0x981242 + 1)(__VA_ARGS__)
#endif
