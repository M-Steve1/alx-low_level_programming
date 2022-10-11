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
	{
		d->name = "(nil)";
		printf("Name:%s\n", d->name);
	}
	else if (d->age == 0 || d->owner == NULL)
	{
		d->owner = "(nil)";
		printf("%s\n", d->owner);
	}
	else if (d->name != NULL && d->owner != NULL && d->age != 0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

