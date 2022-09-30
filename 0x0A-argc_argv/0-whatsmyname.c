#include <stdio.h>

/**
 * main - prints program name followed by a new line
 * @argc: Argument count
 * @argv: argument vector,an array of pointer pointing to
 * a string.
 *
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
