#include "main.h"

/**
 * _memset -function that fills memory with a constant byte
 * @s: starting address to be filled
 * @b: the value
 * @n: changing bytes
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
