#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  frees list_t list.
 * @head: pointer to list_t.
 *
 * Return: Returns nothing.
 */
void free_list(list_t *head)
{
	list_t *p;

	p = head;

	while (p)
	{
		free(p->str);
		p = p->next;
	}
	free(p);
}
