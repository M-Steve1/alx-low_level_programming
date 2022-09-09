#include <stdio.h>

/**
 *	main - Entry point
 *
 *	Return: Always 0 (Success)
 */

int main(void)
{

	char single_digit = '0';
	int digit = single_digit;
	char new_line = '\n';
	int line = new_line;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	putchar(line);
	return (0);

}
