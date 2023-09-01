#include "main.h"
/**
  * clear_bit - function sets the value of a bit to 0 at a given index
  * @n: the unsigned long to change
  * @index: the index to change to zero
  * Return: return 1 if it worked or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int c;

	if (index > 53 || !n)
		return (-1);
	c = 1 << index;
	*n = (*n & ~c) | ((0 << index) & c);
	return (1);
}
