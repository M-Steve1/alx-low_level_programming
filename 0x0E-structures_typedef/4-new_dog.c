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

	new_dog = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
