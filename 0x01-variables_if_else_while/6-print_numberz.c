#include <stdio.h>

/**
 *	main - Entry point
 *
 *	Return: Always 0 (Success)
 */

int main(void)
{

	char single_digit = '0';
	char new_line = '\n';

	for (single_digit = '0'; single_digit <= '9'; single_digit++)
		putchar(single_digit);

	putchar(new_line);
	return (0);

}
