#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of
 * the listint_t list.
 * @head: double pointer to listint_t.
 * @n: To be assigned to an int member in listint_t.
 *
 * Return: Returns the address of the new element, or
 * NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t **tracer;
	listint_t *new_node;

	tracer = head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	while (*tracer)
	{
		tracer = &(*tracer)->next;
	}
	new_node->n = n;
	new_node->next = *tracer;
	*tracer = new_node;

	return (*tracer);
}
