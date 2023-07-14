#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to anos ther string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, firstdLen = 0, secondLen = 0;

	while (s1 && s1[firstdLen])
		firstdLen++;
	while (s2 && s2[secondLen])
		secondLen++;

	if (n < secondLen)
		s = malloc(sizeof(char) * (firstdLen + n + 1));
	else
		s = malloc(sizeof(char) * (firstdLen + secondLen + 1));

	if (!s)
		return (NULL);

	while (i < firstdLen)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < secondLen && i < (firstdLen + n))
		s[i++] = s2[j++];

	while (n >= secondLen && i < (firstdLen + secondLen))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
