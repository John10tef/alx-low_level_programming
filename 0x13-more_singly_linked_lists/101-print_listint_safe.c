#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *loop_node = NULL;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;

		if (current == loop_node)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}

		if (current == head)
		{
			loop_node = head;
			current = head->next;
		}
	}

	return (count);
}

