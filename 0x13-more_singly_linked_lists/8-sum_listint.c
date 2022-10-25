#include "lists.h"

/**
 * sum_listint - sums the numbers in each elements
 * @head: pointer to first element
 * Return: sum or empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
