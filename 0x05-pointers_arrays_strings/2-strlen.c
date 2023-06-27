#include "main.h"

/**
 * _strlen - this function returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int myStr = 0;

	while (*s != '\0')
	{
		myStr++;
		s++;
	}

	return (myStr);
}
