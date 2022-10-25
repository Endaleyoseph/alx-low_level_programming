#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: pointer to pointer to first element
 * @idx: index on which node is added
 * @n: the number to be added
 * Return: pointer to the new node
 * NULL if it failes
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *previous = *head;
	listint_t *current = *head;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (idx != 0)
	{
		previous = current;
		current = current->next;
		idx--;
		if (previous == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	previous->next = node;
	node->next = current;

	return (node);
}
