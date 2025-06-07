// For poweron patch
int PowerOnFunctionHooked(int window, int msgId, int dparam)
{
	((void(*)()) (0x9410E0 | 1))(); // OpenIdle
	((void(*)(uint32 window)) (0x981242 | 1))(window); // MK_CloseWin
	
	return 1;
}