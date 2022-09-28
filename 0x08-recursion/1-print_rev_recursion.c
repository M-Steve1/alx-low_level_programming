#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string to print in reverse
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if(*s != '\0')
	{
		_putchar(*s--);
	}
	else
	{
		return;
	}
	_print_rev_recursion(s);
}
