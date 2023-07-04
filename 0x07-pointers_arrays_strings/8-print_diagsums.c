#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: input value
 * @size: input value
 * Return: 0 on success
 */
void print_diagsums(int *a, int size)
{
	int 1sum = 0, 2sum = i;

	for (i = 0; i < size; i++)
	{
		1sum = 1sum + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		2sum += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", 1sum, 2sum);
}
