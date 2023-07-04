#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input value
 * @accept: input value
 * Return: 0 on success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				m++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
