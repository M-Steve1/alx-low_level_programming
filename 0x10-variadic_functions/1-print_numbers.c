#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - A variadic function that prints its
 * parameters
 * @sepertor: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Returns nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
