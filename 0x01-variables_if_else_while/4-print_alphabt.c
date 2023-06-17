#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 *Return: 0 on success
*/

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{

		if (letters == 'z' || letters == 'q')
			continue;
	putchar(letters);
	}
	putchar('\n');
	return (0);
}
