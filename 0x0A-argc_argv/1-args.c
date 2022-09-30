#include <stdio.h>

/**
 * main - prints the argument count
 * @argc: Argument count
 * @argv: argument vector,an array of pointer pointing to
 * a string.
 *
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);

}
