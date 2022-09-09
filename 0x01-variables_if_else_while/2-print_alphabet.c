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

	int i;
	
	char new_line = '\n';
	char my_string[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int string_len = strlen(my_string);

	for (i = 0; i <= string_len; i++)
		putchar(tolower(my_string[i]));
	putchar(new_line);

	return (0);
}
