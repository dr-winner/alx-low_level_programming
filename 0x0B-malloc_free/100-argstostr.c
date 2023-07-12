#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int mi, tn, dr = 0, li = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (mi = 0; mi < ac; mi++)
	{
		for (tn = 0; av[mi][tn]; tn++)
			li++;
	}
	li += ac;
	str = malloc(sizeof(char) * li + 1);
	if (str == NULL)
		return (NULL);
	for (mi = 0; mi < ac; mi++)
	{
		for (tn = 0; av[mi][tn]; tn++)
		{
			str[dr] = av[mi][tn];
			dr++;
		}
		if (str[dr] == '\0')
		{
			str[dr++] = '\n';
		}
	}
	return (str);
}
