#include <stdio.h>

/**
 * main - prints each arguments on a new line
 * @argc: Argument count
 * @argv: argument vector,an array of pointer pointing to
 * a string.
 *
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
