#include "lists.h"

/**
 * delete_dnodeint_at_index - delets a node at index
 * @head: pointer to pointer to the head of the list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	dlistint_t *tmp1;

	if (*head == NULL || head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while (index != 0 && tmp->next != NULL)
	{
		tmp = tmp->next;
		index--;
	}
	if (index == 0)
	{
		tmp1 = tmp->prev;
		if (tmp->next != NULL)
			tmp->next->prev = tmp1;
		tmp1->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
