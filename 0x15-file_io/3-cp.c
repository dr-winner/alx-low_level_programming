#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * #include <stdlib.h> - It means standard liberary
 * #include <stdio.h> - it means standard input output,
 * Create_Buffer - 1024 bytes is allocated for a buffer,
 * @file: The name of file buffer is storing chars,
 * Return: It points to newly allocated buffer,
 */

void close_file(int fd);
char *create_buffer(char *file);

/*
 * Create_Buffer - 1024 bytes is allocated for a buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can not write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/*
 * the void function to enable file description closure,
 * close_file - Used in closing file description,
 * @fd: The file description,
 */
void close_file(int fd)
{
	int h;

	h = close(fd);

	if (h == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can not close fd %d\n", fd);
		exit(100);
	}
}
/*
 * main: this main program copy the content of a file into another file,
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can not read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can not write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
