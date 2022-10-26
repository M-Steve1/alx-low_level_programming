#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - Finds a node from the list.
 * @head: pointer to listint_t.
 * @index: index of the node, starting at 0.
 *
 * Return: Returns the nth node of the listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp = head;

	while (temp && (i < index))
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
