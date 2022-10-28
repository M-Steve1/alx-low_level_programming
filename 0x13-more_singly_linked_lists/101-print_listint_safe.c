#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *temp, *ptr;
size_t count, i;

temp = NULL, ptr = NULL;

count = 0;

temp = head;

if (!head)
{
	return (count);
	exit(98);
}

while (temp)
{
printf("[%p] %d\n", (void *)temp, temp->n);
count++;
temp = temp->next;
ptr = head;
i = 0;
while (i < count)
{
if (ptr == temp)
{
printf("-> [%p] %d\n", (void *)temp, temp->n);
return (count);
}
i++;
ptr = ptr->next;
}
/**
if (!head)
	exit(98);
	*/
}
return (count);
}
