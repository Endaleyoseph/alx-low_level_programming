#include "lists.h"

/**
 * delete_nodeint_at_index - delets a node at the index
 * @head: pointer to pointer to first element
 * @index: index at which the element to be deleted
 * Return: 1 if success, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous;
	listint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}
	previous = *head;
	while (i < (index - 1) && previous != NULL)
	{
		previous = previous->next;
		i++;
	}
	if (i != (index - 1) || previous->next == NULL)
		return (-1);
	current = previous->next;
	previous->next = (previous->next)->next;
	free(current);

	return (1);
}
