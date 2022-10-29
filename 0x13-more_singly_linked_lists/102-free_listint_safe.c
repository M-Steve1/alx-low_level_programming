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
	size_t count, i, size;

	count = 0, size = 0, temp = *h;

	if (!(*h))
		return (sizeof(listint_t));
	while (temp)
	{
		size += sizeof(temp), count++;
		temp = temp->next;
		ptr = *h, i = 0;
		while (i < count)
		{
			if (temp == ptr)
			{
				size = size + (sizeof(listint_t) * count);
				for (; i > 0; i--)
				{
					hold = (*h)->next;
					free(*h);
					*h = hold;
				}
				*h = NULL;
				return (size);
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
	size = size + (sizeof(listint_t) * count);
	*h = NULL;
	return (size);
}
