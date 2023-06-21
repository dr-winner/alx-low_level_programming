#include <stdio.h>

/**
 * _isalpha - this is a function that checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 on success, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
