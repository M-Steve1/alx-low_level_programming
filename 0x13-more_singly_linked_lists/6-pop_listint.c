#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -  deletes the head node of the listint_t list
 * @head: pointer to listsint_t.
 *
 * Return: Returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int removed_node_int;

	if (head == NULL)
		return (0);

	next_node = (*head)->next;
	removed_node_int = (*head)->n;
	free(*head);
	*head = next_node;

	return (removed_node_int);
}
