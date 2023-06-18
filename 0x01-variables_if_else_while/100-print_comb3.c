#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0 on success
 */
int main(void)
{
	int a, b = '0', c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = c; b <= '9'; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
			}
			if (a == b)
			{
				continue;
			}
			if (a == '8' && b == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
