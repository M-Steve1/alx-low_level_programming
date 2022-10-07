#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: number of bytes of s2 to concatenate.
 *
 * Return: returns pointer to the newly allocated space
 * in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s2_len, s1_len;
	char *s3;

	i = 0, j = 0, s2_len = 0, s1_len = 0;

	while (s2[s2_len] != '\0')
		s2_len++;

	while (s1[s1_len] != '\0')
		s1_len++;

	if (s1 == NULL && s2 == NULL)
	{
		s3 = malloc(sizeof(char));
		s3 = "";
	}
	if (n >= s2_len)
	{
		s3 = malloc((sizeof(char) * (s1_len + s2_len) + 1));
		if (s3 == NULL)
			return (NULL);

		while (s1[i] != '\0')
		{
			s3[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
		s3[i + j + 1] = '\0';
		return (s3);
	}
	else if (s2 == NULL)
	{
		s3 = malloc(sizeof(char) * s1_len + 1);
		if (s3 == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			s3[i] = s1[i];
			i++;
		}
		s3[i + 1] = '\0';
		return (s3);
	}
	else if (s1 == NULL)
	{
		s3 = malloc(sizeof(char) * s2_len + 1);
		if (s3 == NULL)
			return (NULL);
		while (s2[i] != '\0')
		{
			s3[i] = s2[i];
			i++;
		}
		s3[i + 1] = '\0';
		return (s3);
	}
	else if (n < s2_len)
	{
		s3 = malloc(sizeof(char) * (s1_len + n) + 1);
		if (s3 == NULL)
			return (NULL);

		while (s1[i] != '\0')
		{
			s3[i] = s1[i];
			i++;
		}
		while (j < n)
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
		s3[i + j + 1] = '\0';
		return (s3);
	}
	return (NULL);
}
