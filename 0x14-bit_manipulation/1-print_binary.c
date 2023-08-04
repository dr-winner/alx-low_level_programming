#include "main.h"

/**
 * print_binary - the function prints the binary
 * equivalent of a decimal number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int r, cnt = 0;
	unsigned long int cur;

	for (r = 63; r >= 0; r--)
	{
		cur = n >> r;

		if (cur & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
