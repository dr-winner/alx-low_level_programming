#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - this prints strings, followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings pass to the function.
 * @...: the variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              rather "nil" is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *str;
	unsigned int id;

	va_start(s, n);

	for (id = 0; id < n; id++)
	{
		str = va_arg(s, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (id != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
