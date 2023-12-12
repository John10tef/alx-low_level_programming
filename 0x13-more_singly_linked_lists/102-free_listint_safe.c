#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to a pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h, *next = NULL;

	if (h == NULL || *h == NULL)
		return (0);

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		current = next;

		if (current == *h)
			break;
	}

	*h = NULL;
	return (count);
}

