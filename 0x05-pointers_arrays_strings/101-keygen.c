#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this  program generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	int depass[100];
	int dei, desum, den;

	desum = 0;

	srand(time(NULL));

	for (dei = 0; dei < 100; dei++)
	{
		depass[dei] = rand() % 78;
		desum += (depass[dei] + '0');
		putchar(depass[dei] + '0');
		if ((2772 - desum) - '0' < 78)
		{
			den = 2772 - desum - '0';
			desum += den;
			putchar(den + '0');
			break;
		}
	}

	return (0);
}
