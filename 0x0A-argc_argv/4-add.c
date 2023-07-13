#include <stdio.h>
#include <stdlib.h>

/**
* main -  a program that adds positive numbers.
* @argc: argument count
* @argv: arguments vector
* Return: 0
*/

int main(int argc, char **argv)
{
	int y, m, sum = 0;

	char *g;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (y = 1; argv[y]; y++)
	{
		m = strtol(argv[y], &g, 10);
		if (*g)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += m;
		}
	}
	printf("%d\n", sum);
	return (0);
}
