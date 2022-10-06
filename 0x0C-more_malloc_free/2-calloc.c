#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: type size
 * @size: amount
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)str + i) = 0;

	return (str);
}
