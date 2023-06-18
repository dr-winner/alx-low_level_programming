#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 on success
 */

int main(void)
{
	int a, b = '0', c = '0';

	for (a = '0'; a <= '9'; a++)
	{
		for (b = c; b <= '9'; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
				if (a != '8' || b != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
