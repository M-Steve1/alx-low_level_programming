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
	struct dog *ptr;

	ptr = d;
	if (ptr == NULL)
		return;
	if (ptr->name == NULL)
		printf("Name: (nil)");
	if (ptr->owner == NULL)
		printf("owner: (nil)");
	if (ptr->name != NULL && ptr->owner != NULL)
	{
		printf("Name: %s\n", ptr->name);
		printf("Age: %f\n", ptr->age);
		printf("Owner: %s\n", ptr->owner);
	}
}

