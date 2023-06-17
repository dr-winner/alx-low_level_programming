#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - the entry point of the program
 * Return: 0 on Success
 */
int main(void)
{
	int n;

	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, x);
	if (x == 0)
	printf("Last digit of %d is %d and is 0\n", n, x);
	return (0);
}
