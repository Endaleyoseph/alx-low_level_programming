#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the previously allocated memory
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 * Return:  pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		else
			return (s);
	}

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)s + i) = *((char *)ptr + i);
	free(ptr);

	return (s);
}
