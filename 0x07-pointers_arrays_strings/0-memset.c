#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: memory area to be copied
 * @n: number of bytes
 * Return: copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (i = 0; dest[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
