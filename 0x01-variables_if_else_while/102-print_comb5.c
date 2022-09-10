#include <stdio.h>

/**
 *	main - Entry point
 *
 *	Return: Always 0 (Success)
 */

int main(void)
{

	int i;
	int j;
	int k;
	int l;

	for (i = 48; i <= 59; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (k = 48; k <= 59; k++)
			{
				for (l = 49; l <= 59; l++)
				{
					if (l + k > j + i)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);

						if (i == 59 && j == 57 && k == 59 && l == 59)
							break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
