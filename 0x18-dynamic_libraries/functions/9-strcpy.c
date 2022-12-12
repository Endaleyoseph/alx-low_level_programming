#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string including the null byte to the buffer
 * @src: points to a string
 * @dest: points to the buffer
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	j = 0;
	while (j >= 0)
	{
		dest[j] = src[j];
		if  (src[j] == '\0')
			return (dest);
		j++;
	}
	return (dest);
}
