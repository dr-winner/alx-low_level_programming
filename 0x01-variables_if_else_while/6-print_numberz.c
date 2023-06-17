#include <stdio.h>

/**
 * main - program prints all single digit numbers of base 10 starting from 0
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar("\n");

	return (0);
}
