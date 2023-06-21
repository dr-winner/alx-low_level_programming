#include "main.h"

/**
 * times_table - this prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int x, y, k;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			k = y * x;
			if (y == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
