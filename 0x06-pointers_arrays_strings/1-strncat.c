#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * using at most n bytes from src
 * @dest: destination input value
 * @src: source input value
 * @n: n value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[a] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
