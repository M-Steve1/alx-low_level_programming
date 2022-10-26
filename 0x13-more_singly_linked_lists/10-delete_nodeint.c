#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the head node of the
 * listint_t list
 * @head: Pointer to listsint_t.
 * @index: The index of the node that should be deleted.
 * Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t **p;

	p = head;

	if (index == 0)
	{
		free(*p);
		return (1);
	}
	else if (index > 0)
	{
		while (i < index)
		{
			p = &(*p)->next;
			i++;
		}
		free(*p);

		return (1);
	}
	return (-1);
}
