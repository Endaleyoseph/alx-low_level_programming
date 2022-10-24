#include "lists.h"

/**
 * free_listint2 - frees listint_t and set head to NULL
 * @head: pointer to pointer to frist
 * Return: Always 0
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *ptr;

	if (head == NULL)
		return;
	while (tmp != NULL)
	{
		ptr = tmp;
		tmp = tmp->next;
		free(ptr);
	}
	head = NULL;
}
