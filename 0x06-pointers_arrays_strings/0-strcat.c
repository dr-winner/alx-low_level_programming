#include "main.h"

/**
 * _strcat -this function concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a = 1;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
