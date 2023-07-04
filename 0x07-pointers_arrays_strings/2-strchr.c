#include "main.h"

/**
 * _strchr - function that gets the length of a prefix substring
 * @s: input
 * @c: input
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
