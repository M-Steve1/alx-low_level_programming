#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Adds all the data(n) of the listint_t.
 * @head: Pointer to listint_t
 *
 * Return: Returns sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
