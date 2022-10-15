#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers
 * @a: integer to add
 * @b: interger to add
 *
 * Return: Returns the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two integers
 * @a: integer to subtract
 * @b: interger to subtract
 *
 * Return: Returns the subtraction of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integers
 * @a: integer to multiply
 * @b: interger to multiply
 *
 * Return: Returns the multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two integers
 * @a: numerator
 * @b: denominator
 *
 * Return: Returns the division of a against b.
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
		return (-1);
	return (a / b);
}

/**
 * op_mod - finds the modulo of two integers
 * @a: numerator
 * @b: denominator
 *
 * Return: Returns the value of a modulo b
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
		return (-1);
	return (a % b);
}
