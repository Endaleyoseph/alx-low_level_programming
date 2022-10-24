#include "lists.h"

/**
 * get_nodeint_at_index - gets a a particular node
 * @head: pointer to first element
 * @index: index of the list
 * Return: nth node of listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;

	if (index == 0)
	{
		if (head == NULL)
			return (NULL);
		node = head;
		return (node);
	}
	while (index != 0 && head != NULL)
	{
		head = head->next;
		index--;
	}
	if (head == NULL)
		return (NULL);
	node = head;
	return (node);
}
