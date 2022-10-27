#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position.
 * @head: double pointer to listint_t
 * @idx: index of the list where the new node should
 * be added. Index starts at 0
 * @n: value of a the integer n, member of the listint_t
 *
 * Return: Returns the address of the new node, or
 * NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *temp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (temp && (i < idx))
	{
		if (i == (idx - 1))
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
		i++;
	}

	return (NULL);

}
