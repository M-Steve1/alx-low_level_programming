#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers followed by a new line
 * @argc: Argument count
 * @argv: argument vector,an array of pointer pointing to
 * a string.
 *
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	long int add;

	int i;

	add = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			if (!(isalpha(*argv[i])))
			{
				add += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%li\n", add);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
