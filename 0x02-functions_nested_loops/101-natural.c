#include <stdio.h>

/**
 * main - this lists the natural numbers below 1024
 * and they are multiples of 3 and 5
 * Return: 0 on success
 */

int main(void)
{
	int n, res = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 3 || (n % 5) == 0)
			res += n;
	}
	printf("%d\n", res);
	return (0);
}
