#include "main.h"

/**
 * get_endianness - this function contains the function prototype
 * Return:should returns 0 for big, 1 for little.
 * 
 * get_endianness - This checks if a particular machine is little or big. 
 * 
 */

int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
