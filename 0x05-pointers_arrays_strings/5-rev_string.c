#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: Input
 * Return: String
 */

void rev_string(char *s)
{
	char r = s[0];
	int c = 0;
	int p;

	while (s[c] != '\0')
	c++;
	for (x = 0; x < c; x++)
	{
		c--;
		r = s[x];
		s[x] = s[c];
		s[c] = r;
	}
}

