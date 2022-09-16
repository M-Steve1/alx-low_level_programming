#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */

int main(void)
{
	int s;
	long num;

	num = 612852475143;

	for (s = (int) sqrt(num); s > 2; s++)
	{
		if (num % s == 0)
		{
			printf("%d\n", s);
				break;
		}
	}

	return (0);
}
