#include "lists.h"

/**
 * sum_dlistint - sums all the data in the list
 * @head: pointer to the head of the list
 * Return: the sum of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
