#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees dogs
 * @d: data to be freed
 * Return: Always 0
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
