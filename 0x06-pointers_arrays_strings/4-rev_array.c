#include "main.h"

/**
 * reverse_array - this function  reverses array of integers
 * @a: the array
 * @n: no. of  elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
