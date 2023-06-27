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
	for (p = 0; p < c; p++)
	{
		c--;
		r = s[p];
		s[p] = s[c];
		s[c] = r;
	}
}

