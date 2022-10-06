#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _min - finds the minimum integer
 * @a: first int
 * @b: second int
 * Return: the minimum int
 */

int _min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: size of s2 to be copied
 * Return: pointer to newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	int len;
	char *ptr;

	len = _min(strlen(s2), n);

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * (len + strlen(s1)));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';

	return (ptr);
}
