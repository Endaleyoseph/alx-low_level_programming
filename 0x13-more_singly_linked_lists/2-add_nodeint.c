#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds node to the bignning of listint_t
 * @head: the pointer to pointer of the fisrt element
 * @n: number to be added
 * Return: the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_first;

	node_first = malloc(sizeof(listint_t));
	if (node_first == NULL)
	{
		return (NULL);
	}
	node_first->n = n;

	node_first->next = *head;
	*head = node_first;

	return (node_first);
}
