#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued
 * terms, followed by a new line
 * Return: 0 on success
 */

int main(void)
{
	int  n;
	unsigned long int b = 1, m = 2, nxt, res = 0;

	for (n = 1; n <= 33; n++)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			res = res + b;
		}
		nxt = b + m;
		b = m;
		m = nxt;
	}
	printf("%lu\n", res);
	return (0);
}
