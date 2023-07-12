#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: input to concat
 * @s2: input to concat
 * Return: concat
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;

	int y, x;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

	y = x = 0;

	while (s1[y] != '\0')

		y++;

	while (s2[x] != '\0')

		y++;

	conct = malloc(sizeof(char) * (y + x + 1));
	if (conct == NULL)
		return (NULL);
	y = x = 0;
	while (s1[y] != '\0')
	{
		conct[y] = s1[y];
		y++;
	}
	while (s2[x] != '\0')
	{
		conct[y] = s2[x];
		y++, x++;
	}
	conct[y] = '\0';
	return (conct);
}
