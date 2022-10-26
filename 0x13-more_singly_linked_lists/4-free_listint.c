#include <stdlib.h>
#include "lists.h"

/**
 * free_listint -  frees the listint_t list.
 * @head: pointer to listsint_t.
 *
 * Return: Returns nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
