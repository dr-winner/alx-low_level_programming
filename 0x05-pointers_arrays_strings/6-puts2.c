#include "main.h"
/**
 * puts2 - function print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int myint = 0;
	int d = 0;
	char *p = str;
	int x;

	while (*p != '\0')
	{
		p++;
		myint++;
	}
	d = myint - 1;
	for (x = 0 ; x <= d ; x++)
	{
		if (x % 2 == 0)
	{
		_putchar(str[x]);
	}
	}
	_putchar('\n');
}
