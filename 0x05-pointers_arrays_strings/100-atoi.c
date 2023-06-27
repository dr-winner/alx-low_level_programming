#include "main.h"

/**
 * _atoi - function converts a string to an integer
 * @s: string to convert
 *
 * Return: the int of the string
 */
int _atoi(char *s)
{
	int a, b, m, mylen, v, mydigit;

	a = 0;
	b = 0;
	m = 0;
	mylen = 0;
	v = 0;
	mydigit = 0;

	while (s[mylen] != '\0')
		mylen++;

	while (a < mylen && v == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			mydigit = s[a] - '0';
			if (b % 2)
				mydigit = -mydigit;
			m = m * 10 + mydigit;
			v = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			v = 0;
		}
		a++;
	}

	if (v == 0)
		return (0);

	return (m);
}

