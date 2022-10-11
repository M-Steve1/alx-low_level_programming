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
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
