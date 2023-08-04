#include "main.h"

/**
 * get_bit - the function returns the value of a
 * bit at an index in a decimal number
 * @n: the number to search
 * @index: the index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitNum;

	if (index > 63)
		return (-1);

	bitNum = (n >> index) & 1;

	return (bitNum);
}
