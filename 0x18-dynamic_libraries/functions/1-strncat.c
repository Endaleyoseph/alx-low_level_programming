#include "main.h"
#include <stdio.h>

/**
 * *_strncat -  concatenates two strings until n bytes
 * @dest: the first string
 * @src: the second string
 * @n: append n number of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	j = 0;
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
