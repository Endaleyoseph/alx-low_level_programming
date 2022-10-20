#include "lists.h"

/**
 * free_list - frees list_t
 * @head: pointer to list_t
 * Return: Always 0
 */

void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		if (ptr->str == NULL)
		{
			free(ptr);
		}
		else
		{
			free(ptr->str);
			free(ptr);
		}
	}
}
