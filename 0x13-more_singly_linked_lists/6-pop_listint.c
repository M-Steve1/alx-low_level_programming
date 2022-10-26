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
	listint_t **p;

	p = head;

	free(*p);
	return ((*p)->n);
}
