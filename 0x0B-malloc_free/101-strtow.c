#include <stdlib.h>
#include "main.h"

/**
 * count_word - splits a string into deWord that splits a string into deWord
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int deFlag, c, m;

	deFlag = 0;
	m = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			deFlag = 0;
		else if (deFlag == 0)
		{
			deFlag = 1;
			m++;
		}
	}

	return (m);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matr, *z;
	int i, k = 0, deLen = 0, words, c = 0, start, end;

	while (*(str + deLen))
		deLen++;
	deWords = count_word(str);
	if (deWord == 0)
		return (NULL);

	matr = (char **) malloc(sizeof(char *) * (deWord + 1));
	if (matr == NULL)
		return (NULL);

	for (i = 0; i <= deLen; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				z = (char *) malloc(sizeof(char) * (c + 1));
				if (z == NULL)
					return (NULL);

				while (start < end)
				*z++ = str[start++];
				*z = '\0';
				matr[k] = z - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matr[k] = NULL;

	return (matr);
}
