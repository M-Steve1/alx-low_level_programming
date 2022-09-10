#include <stdio.h>

/*
 *	main - Entry point
 *
 *	Return: Alway 0 (Succes)
 **/
int main(void)
{

	int digit;
	char alphabet;

	for (digit = 48; digit < 58; digit++)
		putchar(digit);

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
