#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return - Always 0.
 */
int main(void)
{
	char *s = "hello world";
	char *f = "oleh";
	unsigned int n;

	unsigned int k = _strspn("First, solve the problem. Then, write the code.", "[]{}()");
	n = _strspn(s, f);
	printf("%u\n", n);
	printf("%u\n", k);
	return (0);
}
