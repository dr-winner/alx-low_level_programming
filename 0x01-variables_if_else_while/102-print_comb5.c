#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 on success
 */

int main(void)
{
	int a, x;

	for (a = 0; a < 99; a++)
	{
		for (x = a + 1; x < 100; x++)
		{
			putchar('0' + a / 10);
			putchar('0' + a % 10);
			putchar(' ');
			putchar('0' + x / 10);
			putchar('0' + x % 10);
			if (a == 98 && x == 99)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
