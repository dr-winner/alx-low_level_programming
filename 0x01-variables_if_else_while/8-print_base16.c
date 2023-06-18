#include <stdio.h>
/**
 * main -  prints the numbers of base 16 in lowercase, followed by a new line
 * Return: 0 on success
 */

int main(void)
{
	int hex;

	char ch;

	for (hex = 0; hex < 10; hex++)
		putchar((hex % 10) + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
