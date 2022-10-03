#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new allocated space, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;

	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	j++;

	dest = malloc(sizeof(char) * (i + j));

	if (dest == NULL)
		return (NULL);
	k = 0;
	while (k < i)
	{
		dest[k] = s1[k];
		k++;
	}

	l = 0;
	while (l < j)
	{
		dest[k] = s2[l];
		k++;
		l++;
	}

	return (dest);
}
