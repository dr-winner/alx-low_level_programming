#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, excluding e and q
 * Return: 0 on success
*/

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{

		if (letters != 'e' && letters != 'q')
			putchar(letters);
	}
	putchar('\n');
	return (0);
}
