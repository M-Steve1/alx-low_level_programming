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
		printf("Name: (nil)\n");
	else if (d->age == 0 || d->owner == NULL)
		printf("(nil)\n");			
	else if (d->name != NULL && d->owner != NULL && d->age != 0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

