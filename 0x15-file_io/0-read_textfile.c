#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this function reads text file print to STDOUT.
 * @filename: the text file being read
 * @letters: the number of letters to be read
 * Return: w- actual number of bytes read and printed else
 * 0 if function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t a;
	ssize_t b;
	ssize_t v;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	v = read(a, buf, letters);
	b = write(STDOUT_FILENO, buf, v);

	free(buf);
	close(a);
	return (b);
}
