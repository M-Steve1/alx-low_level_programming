#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * create_file - Creates a file.
 * @filename: Name of file to be created.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: Returns 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	size_t len = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);
	if (w == -1)
	{
		printf("File cannot be written");
		return (-1);
	}

	close(fd);

	return (1);
}

