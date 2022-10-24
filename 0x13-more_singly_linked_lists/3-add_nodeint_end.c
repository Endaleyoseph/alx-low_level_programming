#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of the list
 * @head: pointer to pointer  to first member
 * @n: element to be added
 * Return: pointer to the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end, *temp;

	node_end = malloc(sizeof(listint_t));
	if (node_end == NULL)
		return (NULL);
	node_end->n = n;
	node_end->next = NULL;

	if (*head == NULL)
		*head = node_end;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node_end;
	}

	return (node_end);
}
