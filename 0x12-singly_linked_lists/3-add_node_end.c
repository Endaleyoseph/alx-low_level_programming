#include "lists.h"

/**
 * add_node_end - adds node at the end of the element
 * @head: pointer to list_t
 * @str: string
 * Return: address of the new elemnet
 * NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end;
	list_t *temp;
	unsigned int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);

	if (strdup(str) == NULL)
		return (NULL);
	node_end = malloc(sizeof(list_t));
	if (node_end == NULL)
		return (NULL);
	node_end->str = strdup(str);
	node_end->len = len;
	node_end->next = NULL;
	if (*head == NULL)
	{
		*head = node_end;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node_end;
	}

	return (node_end);
}
