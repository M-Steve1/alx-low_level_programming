#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of
 * the listint_t list.
 * @head: double pointer to listint_t.
 * @n: To be assigned to an int member in listint_t.
 *
 * Return: Returns the address of the new element, or
 * NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
