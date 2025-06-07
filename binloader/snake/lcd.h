
uint32 strlen(char* str)
{
	int i;
	char* startPtr = str;

	while(*str != 0x0)
		str++;

	return (uint32)(str - startPtr);
}

int LcdDrawChar(LoaderContext* context, uint16* frameBuffer, char chr, uint32 x, uint32 y, uint16 color)
{
	if(x >= 0 && y >= 0 && x + FONT_WIDTH < LCD_WIDTH && y + FONT_HEIGHT < LCD_HEIGHT)
	{
		int i, j;
		unsigned char* glyph = (unsigned char*)(GLOBAL(context) + &embedded_font[chr * 8]);

		for(i = 0; i < FONT_HEIGHT; i++)
		{
			short* fb = &((short*)frameBuffer)[(y + i) * LCD_WIDTH + x];

			for(j = 0; j < FONT_WIDTH; j++)
			{
				if((*glyph >> (FONT_WIDTH - j)) & 0x1)
					*fb = color;

				fb++;
			}

			glyph++;
		}
		
		return true;
	}
	
	return false;
}

void LcdDrawString(LoaderContext* context, uint16* frameBuffer, char* str, uint32 x, uint32 y, uint16 color)
{
	if(x >= 0 && y >= 0)
	{
		unsigned int i;

		for(i = 0; i < strlen(str); i++)
		{
			if(!LcdDrawChar(context, frameBuffer, str[i], x, y, color))
				return; // Out of screen

			x += FONT_WIDTH;
		}
	}
}

#define LCD_PLOT_565(x, y, color) ((short*)frameBuffer)[(y) * LCD_WIDTH + (x)] = color

#define clamp(val, min, max) val < min ? min : (val > max ? max : val)

void LcdDrawBitmap(uint16* frameBuffer, short* bitmap, uint32 width, uint32 height, uint32 x, uint32 y)
{
	if(bitmap)
	{
		int i, j;
		short* bmp = bitmap;

		// Slow debug version
		for(i = 0; i < height; i++)
		{
			for(j = 0; j < width; j++)
			{
				LCD_PLOT_565(clamp(x + j, 0, LCD_WIDTH - 1), clamp(y + i, 0, LCD_HEIGHT - 1), bmp[i * width + j]);
			}
		}
	}
}

#define LcdGetFrameBuffer 0x321DEA + 1
#define LcdFillRectPtr 0x9701C4 + 1
#define LcdUpdateRect 0x966378 + 1

uint16* LcdBegin()
{
	LcdId lcd = { 0, 0 };
	uint16* fb = ((uint16*(*)(LcdId* id)) LcdGetFrameBuffer)(&lcd);

	uint16 startEnd[4] = { 0, 0, 240, 320 };
	((void(*)(LcdId* lcdId, uint32 start, uint32 end, uint16 col)) LcdFillRectPtr)(&lcd, ((uint32*)&startEnd[0])[0], ((uint32*)&startEnd[0])[1], 0x0);
	
	return fb;
}

void LcdEnd()
{
	((void(*)()) LcdUpdateRect)(); // Update rect
}