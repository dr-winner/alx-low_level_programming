#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory area where it's stored
 * @src: memory source where it's copied to
 * *@n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int i = n;

	for (; d < i; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
