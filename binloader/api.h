/*
*
*	Spreadtrum binloader
*

*	API headers
*
*	©2025 Bogdan Nikolaev. All rights reserved.
*
*	Special thanks to Ilya_ZX
*/

#ifndef API_H
#define API_H

#define LCD_WIDTH 240
#define LCD_HEIGHT 320

#define FILE_READ 0x33
#define FILE_WRITE 0x32
#define FILE_CREATE 0x22

#define uint32 unsigned int
#define uint16 unsigned short
#define uint8 unsigned char
#define byte unsigned char
#define wchar_t unsigned short

#define true 1
#define false 0

#include "function_table.h"

#define __API_

typedef struct {
	void** FunctionTable;
	void** WindowFunc;
} LoaderContext;

// WindowFunc is also used by libruntime to "close" itself and pass control to loaded program
typedef void(*WindowFunc)(LoaderContext* context, uint32 window, uint32 msgId, uint32 dparam);

#define SFS_SEEK_BEGIN		0  /*Beginning of file */
#define SFS_SEEK_CUR		1  /*Current position of file */
#define SFS_SEEK_END		2  /*End of file   */

#define		SFS_MODE_READ				((uint32)(0x1<<0))
#define		SFS_MODE_WRITE				((uint32)(0x1<<1))
#define		SFS_MODE_SHARE_READ		((uint32)(0x1<<2))
#define		SFS_MODE_SHARE_WRITE		((uint32)(0x1<<3))
/**------------------------------------------------------------------*
 **     SFS access Mode(bit4-bit7)                                   *
 **     only have following choice:                                  *
 **------------------------------------------------------------------*/
#define		SFS_MODE_CREATE_NEW		((uint32)(0x1<<4))
#define		SFS_MODE_CREATE_ALWAYS	((uint32)(0x2<<4))
#define		SFS_MODE_OPEN_EXISTING	((uint32)(0x3<<4))
#define		SFS_MODE_OPEN_ALWAYS		((uint32)(0x4<<4))
#define		SFS_MODE_APPEND			((uint32)(0x5<<4))

#include <msg.h>

// LCD structs
typedef struct {
	uint32 lcdId;
	uint32 bufferId;
} LcdId;

typedef struct {
	uint32 x, y, w, h;
} Rect;

typedef struct {
	uint32 width;
	uint32 height;
	short* pixels;
} Bitmap;

#ifndef LOADER
#define __api_table context->FunctionTable
#endif

#endif