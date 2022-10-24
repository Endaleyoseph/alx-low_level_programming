#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to first element of listint_t
 * Return: the number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
