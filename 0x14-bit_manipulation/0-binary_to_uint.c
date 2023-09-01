#include "main.h"
/**
  * binary_to_uint - this function converts a binary number to an unsigned int
  * @b: the binary number
  * Return: return converted number or 0 if it fails
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, p;
	int a;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
		;
	a--;
	for (p = 1, uint = 0; a >= 0; a--)
	{
		if (b[a] == '0')
		{
			p *= 2;
			continue;
		}
		else if (b[a] == '1')
		{
			uint += p;
			p *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
