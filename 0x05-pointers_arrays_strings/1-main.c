#include "main.h"
#include <stdio.h>

/**
 * main - change the value of a variable from outside the
 * function it is declared in, using a pointer.
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b= 42;

	printf("a=%d\n, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d\n, b=%d\n", a, b);
	return (0);
}
