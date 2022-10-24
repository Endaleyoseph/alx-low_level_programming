#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: pointer to frist
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
