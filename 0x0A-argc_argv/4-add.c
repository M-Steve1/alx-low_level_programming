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
	int i;


	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			if (isdigit(argv[i]))
				printf("yes");
			else
				printf("no");
			break;
		}
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
