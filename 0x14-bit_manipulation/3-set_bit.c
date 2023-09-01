#include "main.h"
/**
  * set_bit - this function sets the value of a bit to 1 at a given index
  * @n: the unsigned long to change
  * @index: this is index to change to one
  * Return: return1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
