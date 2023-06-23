#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largeNum;

	if (a > b && a > c)
	{
		largeNum = a;
	}
	else if (a > b && c > a)
	{
		largeNum = c;
	}
	else if (b > c)
	{
		largeNum = b;
	}
	else
	{
		largeNum = c;
	}
	return (largeNum);
}
