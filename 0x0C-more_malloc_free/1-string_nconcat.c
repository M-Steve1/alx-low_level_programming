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

	if (n >= s2_len)
	{
		s3 = malloc((sizeof(char) * (s1_len + s2_len) + 1));
		if (s3 == NULL)
			return (NULL);
		concat_s1_s2(i, j, s3, s1, s2);
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
	}
	else if (s1 == NULL && s2 == NULL)
		return (NULL);
	else
	{
		s3 = malloc(sizeof(char) * (s1_len + n) + 1);
		if (s3 == NULL)
			return (NULL);
		n_byte_concat(n, i, j, s3, s1, s2);
	}
	return (s3);
}

/**
 * concat_s1_s2 - concatenates s1 and s2.
 * @string1_len: length of s1
 * @string2_len: length of s2
 *
 * Return: Returns nothing
*/

void concat_s1_s2(unsigned int i, unsigned int j, char *s3, char *s1, char*s2)
{
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
}

/**
 * n_byte_concat - concatenates s2 to s1 using n_bytes
 * @string1_len: length of s1
 * @n_byte: n_byte
 *
 * Return: Returns nothing
*/

void n_byte_concat(unsigned int n_byte, unsigned int i, unsigned int j, char *s3, char *s1, char *s2)
{
		while (s1[i] != '\0')
		{
			s3[i] = s1[i];
			i++;
		}
		while (j < n_byte)
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
		s3[i + j + 1] = '\0';
}
