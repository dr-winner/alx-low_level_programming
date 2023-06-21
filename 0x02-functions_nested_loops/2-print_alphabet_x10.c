#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char let;

	int x;

	x = 0;

	while (x < 10)
	{
		let = 'a';
		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}
		_putchar('\n');
		x++;
	}
}


