#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 *
 * @c: The character to check for
 *
 * Return: return 1 if it an alphabet, 0 if otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
