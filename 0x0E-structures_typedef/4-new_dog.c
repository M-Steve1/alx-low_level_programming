#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointers to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t a_copy;
	dog_t *ptr;

	(void)a_copy;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;

	a_copy.name = new_dog.name;
	a_copy.owner = new_dog.owner;

	ptr = &new_dog;

	return (ptr);
}
