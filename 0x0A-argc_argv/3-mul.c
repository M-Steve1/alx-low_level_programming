#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers followed by a new line
 * @argc: Argument count
 * @argv: argument vector,an array of pointer pointing to
 * a string.
 *
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	long int mul;

	int i;

	mul = 1;

	if (argc > 1 && argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%li\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
