#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 * Return: 0 on success
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
