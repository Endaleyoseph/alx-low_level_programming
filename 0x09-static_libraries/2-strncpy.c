#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: the array in which the string is being copied
 * @src: the string to be copied
 * @n: the amount of character to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
