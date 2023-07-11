#include "main.h"
#include <stdlib.h>

/**
 * create_array - this creates an array and assign it to c
 * @size: size of the array
 * @c: character to assign
 * Description: creating an arrayf of size size and c as char
 * Return: pointer to the array, else NULL if unsuccessful
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int n;

	str = malloc(sizeof(char *size);
			if (size == 0 || str == NULL)
			return (NULL);

		for (n = 0; n < size; n++)
			str[n] = c;
			return (str);
}
