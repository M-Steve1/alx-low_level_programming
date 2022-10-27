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

	listint_t *temp;

	listint_t *temp2 = *head;
	listint_t *save_point;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	while (temp2 && (i < index))
	{
		if (i == (index - 1))
		{
			save_point = temp2->next->next;
			free(temp2->next);
			temp2->next = save_point;
			return (1);
		}
		else
		{
			temp2 = temp2->next;
		}
		i++;
	}
	return (-1);
}
