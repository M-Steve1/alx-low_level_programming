#include <stdio.h>

#include <string.h>

#include <ctype.h>

/**
*    main - Entry point
*
*    Return: Always 0 (Success)
*/

int main(void)
{

	char new_line = '\n';
	char my_string;


	for (my_string = 'Z'; my_string >= 'A'; my_string--)
		putchar(tolower(my_string));
	putchar(new_line);

	return (0);
}
