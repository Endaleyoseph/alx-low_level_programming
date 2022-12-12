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
	unsigned int i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}

	return (dest);
}
