#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * create_buffer - Allocates 1024 bytes in memory.
 * @file_name: File to make use of the buffer.
 *
 * Return: Returns Pointer to the newly allocated space.
 */
char *create_buffer(char *file_name)
{
	char *buffer;

	buffer = malloc(1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file;
 * @fd: file descripion of file to close.
 *
 * Return: Returns Nothing.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @ac: Argument count.
 * @av: Argument vectors.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	char *buffer;
	int file, copy;
	ssize_t r, w;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(av[2]);
	file = open(av[1], O_RDONLY);
	r = read(file, buffer, 1024);
	copy = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	do {
		if (r == -1)
		{
			dprintf(STDERR_FILENO,
			       "Error: Can't read from %s", av[1]);
			free(buffer);
			exit(98);
		}
		w = write(copy, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s", av[2]);
			free(buffer);
			exit(99);
		}
		r = read(file, buffer, 1024);
		copy = open(av[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	close(file);
	close(copy);
	free(buffer);

	return (0);
}
