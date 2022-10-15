#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Check for the length of the string
 * excluding the null ternimator '\0'.
 * @s: The string to check its length.
 *
 * Return: Returns string length.
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - copies src into dest.
 * @dest: Destination string.
 * @src: String to copy (source).
 *
 * Return: Returns pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	i = 0;

	while (src[len] != '\0')
		len++;

	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Returns pointer to dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_copy;

	int len1 = _strlen(name);
	int len2 = _strlen(owner);

	dog_copy = malloc(sizeof(dog_t));
	if (dog_copy == NULL)
		return (NULL);

	dog_copy->name = malloc((sizeof(char) * len1) + 1);
	if (dog_copy->name == NULL)
	{
		free(dog_copy);
		return (NULL);
	}

	dog_copy->owner = malloc((sizeof(char) * len2) + 1);
	if (dog_copy->owner == NULL)
	{
		free(dog_copy->name);
		free(dog_copy);
		return (NULL);
	}

	_strcpy(dog_copy->name, name);
	_strcpy(dog_copy->owner, owner);
	dog_copy->age = age;

	return (dog_copy);
}
