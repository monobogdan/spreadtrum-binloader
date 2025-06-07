
int abs(int a)
{
	return a < 0 ? -a : a;
}

int __divsi3 (int a, int b)
{
	if (b == 0) {
        return 0;
    }

    unsigned int dividend = abs(a);
    unsigned int divisor = abs(b);
    unsigned int quotient = 0;
    unsigned int temp = 0;

    for (int i = 31; i >= 0; --i) {
        temp = (temp << 1) | ((dividend >> i) & 1);
        if (temp >= divisor) {
            temp -= divisor;
            quotient |= (1 << i);
        }
    }

    return quotient;
}