#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Returns nothing.
 */
void print_all(const char * const format, ...)
{
	int i = 0;

	char *s, *spt = "";

	va_list ap;

	va_start(ap, format);

	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", spt, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", spt, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", spt, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", spt, s);
					break;
				default:
					i++;
					continue;
			}
			spt = ", ";
			i++;
		}
	}
	putchar('\n');
	va_end(ap);
}
