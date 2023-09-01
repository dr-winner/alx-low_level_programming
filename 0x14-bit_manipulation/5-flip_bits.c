#include "main.h"
/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int d, n = 0;
	unsigned long int k = sizeof(unsigned long int) * 8;

	for (d = 0; d < k; d++)
	{
		if ((m & 1) != (n & 1))
			n += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (n);
}
