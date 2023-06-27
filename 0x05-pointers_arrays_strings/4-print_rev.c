#include "main.h"

/**
 * print_rev - function prints a string, in reverse, followed by a new line
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int myint = 0;
	int x;

	while (*s != '\0')
	{
		myint++;
		s++;
	}
	s--;
	for (x = myint; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
