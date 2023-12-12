#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a
 *                           listint_t linked list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: If the function succeeds - 1.
 *         Otherwise - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	temp = (*head)->next;
	for (i = 1; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}

