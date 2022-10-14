#include "variadic_functions.h"
#include <stdlib.h>

/**
 * main - chech the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	print_strings(NULL, 4, "You ", "know ", "nothing, ", "Jon Snow");
	print_strings("; ", 4, "You know", "", "nothing", NULL);
	return (0);
}

