#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * copy_file - Copies the content of a file to another file.
 * @file_from: file whose content is to be copied.
 * @file_to: Destination file.
 * Return: Returns 1 if success.
 */
int copy_file(char *file_from, char *file_to)
{
	FILE *file, *copy;
	int c, c1;
	char *data;
	size_t w;
	long int file_size;

	if (file_from == NULL)
	{
		printf("Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (file_to == NULL)
	{
		printf("Error: Can't write to %s\n", file_to);
		exit(99);
	} file = fopen(file_from, "r");
	if (file == NULL)
	{
		printf("Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fseek(file, 0, SEEK_END), file_size = ftell(file);
	fseek(file, 0, SEEK_SET), data = malloc(file_size);
	memset(data, 0, file_size), fread(data, 1, file_size, file);
	copy = fopen(file_to, "w"), w = fwrite(data, 1, file_size, copy);
	if (w == 0 || copy == NULL)
	{
		printf("Error: Can't write to %s\n", file_to);
		exit(99);
	} c = fclose(file);
	if (c != 0)
	{
		fprintf(file, "%s", "Error: Can't close fd\n");
		exit(100);
	} c1 = fclose(copy);
	if (c1 != 0)
	{
		fprintf(copy, "%s", "Error: Can't close fd\n");
		exit(100);
	} return (1);
}
