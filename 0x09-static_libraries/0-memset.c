#include "main.h"

/**
 * _memset - copies memory area
 * @s: memory area
 * @b: character
 * @n: number of bytes
 * Return: copied memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *csrc = (char *)s;

	for (i = 0; i < n; i++)
	{
		csrc[i] = b;
	}

	return (s);
}
