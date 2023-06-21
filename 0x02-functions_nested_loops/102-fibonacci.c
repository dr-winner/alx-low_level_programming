#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: 0 on success
 */

int main(void)
{
	int c;

	unsigned long fibo1 = 0, res, fibo2 = 1;

	for (c = 0; c < 50; c++)
	{
		res = fibo2 + fibo1;
	printf("%lu", res);

	fibo1 = fibo2;
	fibo2 = res;

	if (c == 49)
		printf("\n");
	else
		printf(" ");
	}
	return (0);
}
