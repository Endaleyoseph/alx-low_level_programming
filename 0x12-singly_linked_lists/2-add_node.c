#include "lists.h"

/**
 * add_node - adds a node to the first element
 * @head: the pointer to list_t
 * @str: string to be add
 * Return: pointer to list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);
	len = strlen(str);
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = len;
	
	if (head == NULL)
		node->next = NULL;
	else
		node->next = *head;
	*head = node;

	return (node);
}
