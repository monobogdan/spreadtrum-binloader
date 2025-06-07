void LcdClear(LoaderContext* context)
{
	LcdId lcd = { 0, 0 };
	Rect rct = { 0, 0, LCD_WIDTH, LCD_HEIGHT };
	
	uint16* fb = ((uint16*(*)(LcdId* id)) LcdGetFrameBuffer)(&lcd);

	uint16 startEnd[4] = { 0, 0, 240, 320 };

	((void(*)(LcdId* lcdId, uint32 start, uint32 end, uint16 col)) LcdFillRectPtr)(&lcd, ((uint32*)&startEnd[0])[0], ((uint32*)&startEnd[0])[1], 0x0);
	
	LcdDrawBitmap(fb, (short*)(GLOBAL(context) + (uint32)&lada_bmp), LADA_WIDTH, LADA_HEIGHT, 0, 0);
	
	LcdDrawString(context, fb, SCONST(context, "Ya lyublu AvtoVAZ"), 0, 0, 0xFFFFFF);
	
	((void(*)()) LcdUpdateRect)(); // Update rect
}