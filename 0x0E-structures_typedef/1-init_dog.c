#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initializes variable type struct dog
 * @d: pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: retuns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
		return;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
