#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees dogs.
 * @d: pointer to struct dog
 *
 * Return: returns nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
