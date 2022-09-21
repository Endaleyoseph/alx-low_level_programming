#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: character to be checked
 * Return: Always c
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 'a' + 'A';
	}
	return (c);
}
