#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string to be encoded
 * Return: c
 */

char *leet(char *c)
{
	int i, j, num[5] = {4, 3, 0, 7, 1};
	char *s = "AaEeOoTtLl";

	for (i = 0; c[i]; i++)
	{
		for (j = 0; c[i] != s[j] && j < 10; j++)
			;
		if (c[i] == s[j])
		{
			j = j / 2;
			c[i] = (num[j] + '0');
		}
	}
	return (c);
}
