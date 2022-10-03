#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to newly allocated space
 * @str: string to be copied
 * Return: pointer to string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int i = 0;
	unsigned int j = strlen(str) + 1;

	if (str == NULL)
		return (NULL);

	dest = malloc(sizeof(char) * j);

	if (dest == NULL)
		return (NULL);

	while (i < j)
	{
		dest[i] = str[i];
		i++;
	}

	return (dest);
}
