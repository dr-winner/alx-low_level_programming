#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - fuction returns the sum of all its paramters.
 * @n: paramters passed to the function.
 * @...: the variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 *         else - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, sum = 0;

	va_start(x, n);
	for (i = 0; i < n; i++)
		sum += va_arg(x, int);
	va_end(x);
	return (sum);
}
