#include <stdio.h>

/**
 *	main - Entry point
 *
 *	Return: Always 0 (Success)
 */

int main(void)
{

	long single_digit = '0';
	long new_line = '\n';

	for (single_digit = '0'; single_digit <= '9'; single_digit++)
	{
		putchar(single_digit);
		if (single_digit == '9')
			break;
		putchar(',');
		putchar(' ');
	}

	putchar(new_line);
	return (0);

}
