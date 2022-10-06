#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: the size of the memory
 * Return: pointer to the allocated memory, or 98 for failure
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);


	return (str);
}
