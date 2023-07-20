#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - the function prints name using pointer to function
 * @name: the adding string
 * @f: pointer to the function
 * Return: 0
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
