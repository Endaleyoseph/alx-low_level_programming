#include "lists.h"

/**
 * list_len - gets the number of elements
 * @h: pointer to list_t
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
