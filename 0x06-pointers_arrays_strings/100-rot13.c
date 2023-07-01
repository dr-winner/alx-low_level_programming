#include "main.h"
#include <stdio.h>

/**
 * rot13 - this encodes rot13
 * @s: pointer to params
 *
 * Return: s
 */

char *rot13(char *s)
{
	int a, b;

	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char dt[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == d1[b])
			{
				s[a] = dt[b];
				break;
			}
		}
	}
	return (s);
}
