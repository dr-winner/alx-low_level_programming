#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: char
 * Return: 0 on success
 */

char *_strdup(char *str)
{
	char *n;

	int y, x;

	if (str == NULL)
	return (NULL);

	n = 0;
	while (str[y] != '\0')

		y++;

	n = malloc(sizeof(char) * (y + 1));

	if (n == NULL)
		return (NULL);
	for (r = 0; str[x]; x++)
		n[x] = str[x];
	return (n);
}
