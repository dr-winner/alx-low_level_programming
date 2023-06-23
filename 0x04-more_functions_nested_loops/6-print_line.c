#include "main.h"

/**
 * print_line - this function prints a straight line
 * @n: number of times
 * Return: 0
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
