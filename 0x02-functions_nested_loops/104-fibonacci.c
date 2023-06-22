#include <stdio.h>

/**
 * main - program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * no hard-coding
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int n;
	unsigned long int b = 1;
	unsigned long int a = 2;
	unsigned long int z = 1000000000;
	unsigned long int b1;
	unsigned long int b2;
	unsigned long int a1;
	unsigned long int a2;

	printf("%lu", b);
	for (n = 1; n < 91; n++)
	{
		printf(", %lu", a);
		a += b;
		b = a - b;
	}
	b1 = (b / z);
	b2 = (b % z);
	a1 = (a / z);
	a2 = (a % z);

	for (n = 92; n < 99; ++n)
	{
		printf(", %lu", a1 + (a2 / z))
		printf("%lu", a2 % z);
		a1 = a1 + b1;
		b1 = a1 - b1;
		a2 = a2 + b2;
		b2 = a2 - b2;
	}
	printf("\n");
	return (0);
}
