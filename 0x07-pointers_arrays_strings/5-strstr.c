#include "main.h"

/**
 * _strstr -  function that locates a substring
 * @haystack: value to be inputed
 * @needle: input value
 * Return: 0 on success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *b = needle;

		while (*n == *b && *b != '\0')
		{
			n++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
