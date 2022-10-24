#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the first node
 * @str: Pointer to str
 *
 * Return: Returns the address of the new element, or NULL if
 * it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t **tracer;

	tracer = head;


	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);
	end->str = strdup(str);
	end->len = strlen(str);

	while (*tracer)
	{
		tracer = &(*tracer)->next;
	}

	end->next = *tracer;
	*tracer = end;

	return (*tracer);
}

