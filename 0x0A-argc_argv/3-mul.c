#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that multiplies two numbers.
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char **argv)
{
	int n, i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	i = atoi(argv[2]);
	printf("%d\n", n * i);
	return (0);
}
