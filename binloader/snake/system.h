#define RANDOM_PTR 0xB21D08 + 1

int rand()
{
	return ((int(*)()) RANDOM_PTR)(); // Update rect
}