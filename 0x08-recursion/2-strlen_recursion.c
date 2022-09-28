#include "main.h"

/**
 * _strlen_recursion - checks for the length of a string
 * @s: String to determine it's length
 *
 * Return: returns the lenth of the string.
 */
int _strlen_recursion(char *s)
{
	if (*(s + 0) == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
