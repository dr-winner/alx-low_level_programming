#include <stdio.h>

/**
 * main - program prints all single digit numbers of base 10 starting from 0
 * Return: 0 on success
 */
int main(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		putchar(p);
	}
	putchar('\n');

	return (0);
}
