#include "main.h"

/**
 * puts_half - function prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int x, b, c;

	c = 0;

	for (x = 0; str[x] != '\0'; x++)
		c++;

	b = (c / 2);

	if ((c % 2) == 1)
		b = ((c + 1) / 2);

	for (x = b; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
