#include <stdio.h>
#include <stdlib.h>

/**
* main -  a program that prints the min number of coins to make change
* for an amount of money
* @argc: argument count
* @argv: arguments vector
* Return: 0
*/

int main(int argc, char **argv)
{
	int deTotal, deCount;

		unsigned int z = 0;

	char *p;

	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	deTotal = strtol(argv[1], &p, 10);
	deCount = 0;
	if (!*p)
	{
		while (deTotal > 1)
		{
			for (z = 0; z < sizeof(cents[z]); z++)
			{
				if (deTotal >= cents[z])
				{
					deCount += deTotal / cents[z];
					deTotal = deTotal % cents[z];
				}
			}
		}
		if (deTotal == 1)
			deCount++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", deCount);
	return (0);
}
