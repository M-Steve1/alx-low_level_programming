#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Double pointer to the list that is to be freed.
 *
 * Return: Returns size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *ptr, *hold;
	size_t count, i;

	count = 0, temp = *h;

	if (!(*h))
		return (0);
	while (temp)
	{
		count++;
		temp = temp->next;
		ptr = *h, i = 0;
		while (i < count)
		{
			if (temp == ptr)
			{
				for (; i > 0; i--)
				{
					hold = (*h)->next;
					free(*h);
					*h = hold;
				}
				*h = NULL;
				return (count);
			}
			i++;
			ptr = ptr->next;
		}
	}

	while (*h)
	{
		hold = (*h)->next;
		free(*h);
		*h = hold;
	}
	h = NULL;
	return (count);
}
