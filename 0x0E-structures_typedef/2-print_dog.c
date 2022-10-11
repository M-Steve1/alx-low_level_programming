#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: points to struct dog
 *
 * Return: returns nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("owner: (nil)");
	if (d->name != NULL && d->owner != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

