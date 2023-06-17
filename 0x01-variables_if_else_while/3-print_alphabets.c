#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 and then in uppercase, followed by a new line
 * Return: 0 on Success
 */
int main(void)
{
	char cases;

	for (cases = 'a'; cases <= 'z'; cases++)
		putchar(cases);

	for (cases = 'A'; cases <= 'Z'; cases++)
		putchar(cases);

	putchar('\n');

	return (0);
}
