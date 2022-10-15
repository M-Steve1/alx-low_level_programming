#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Check the code.
 * @argc: Argument count.
 * @argv: List of arguments in the function
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	int (*p)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = (*p)(atoi(argv[1]), atoi(argv[3]));
	if (result == -1)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", result);

	return (0);
}
