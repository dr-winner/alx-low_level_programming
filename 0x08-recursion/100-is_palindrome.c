#include "main.h"

int check_pal(char *s, int i, int len);

int _strlen_recursion(char *s);

/**
 * is_palindrome - this checks if the string is a palindrome
 * @s: string to rev
 *
 * Return: 1 on success, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - fucntion returns length of the string
 * @s: string to calc
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal -this function checks the characters recursively for palindrome
 * @s: check string
 * @i: iterator
 * @len: the string length
 *
 * Return: 1 on success, else 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
