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

	char my_string[22] = "Stephen is a Good Boy";

	int string_len = strlen(my_string);

	for (i = 0; i <= string_len; i++) {
		putchar(tolower(my_string[i]));
	}

	return (0);
  
}
