#include "main.h"

/**
 * flip_bits - this function counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r, cnt = 0;
	unsigned long int cur;
	unsigned long int exclusive = n ^ m;

	for (r = 63; r >= 0; r--)
	{
		cur = exclusive >> r;
		if (cur & 1)
			cnt++;
	}

	return (cnt);
}
