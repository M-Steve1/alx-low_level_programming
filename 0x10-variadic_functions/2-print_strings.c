#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - A variadic function that prints strings.
 * @separator: string to be printed between the strings.
 * @n:The number of strings passed to the function
 *
 * Return: Returns nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *p;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char *);
		if (p == NULL)
			p = "(nil)";
		printf("%s", p);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
