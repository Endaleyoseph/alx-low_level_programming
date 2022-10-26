#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to pointer to first element
 * Return: pointer to revesed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *head_rev;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	head_rev = NULL;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = head_rev;
		head_rev = *head;
		*head = tmp;
	}
	(*head) = head_rev;

	return (head_rev);
}
