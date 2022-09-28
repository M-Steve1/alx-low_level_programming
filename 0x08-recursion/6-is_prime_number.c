#include "main.h"

/**
 * is_prime_number - Finds prime numbers.
 * @n: integer to determine if prime or not
 *
 * Return: returns 1 if the input integer is a prime
 * number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n < 1)
		return (0);
	return (prime_checker(n, 2));
}

/**
 * prime_checker - checks for prime number
 * @n: integer determine if prime number or not
 * @i: integer to increment
 *
 * Return: Return: returns 1 if the input integer is a prime
 * number, otherwise return 0.
 */
int prime_checker(int n, int i)
{
	if (n % i == 0 && i != n)
		return (0);
	if (n % 2 != 0 || n % 3 != 0)
		return (1);
	return (prime_checker(n, i + 1));
}
