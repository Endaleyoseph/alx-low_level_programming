#include "main.h"

/**
 * rot13 - encode a string using rot13 encryption
 * @c: the string to be encrpted
 * Return: the encrpted string
 */

char *rot13(char *c)
{
	int i, j, k;
	char *s = "ANBOCPDQERFSGTHUIVJWKXLYMZanbocpdqerfsgthuivjwkxlymz";

	k = -1;
	for (i = 0; c[i]; i++)
	{
		k = 1;
		for (j = 0; c[i] != s[j] && j < 52; j++)
		{
			k = k * -1;
		}
		if (c[i] == s[j])
		{
			c[i] = c[i] + (13 * k);
		}
	}
	return (c);
}
