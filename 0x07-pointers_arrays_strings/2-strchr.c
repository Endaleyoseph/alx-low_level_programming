#include "main.h"
#define NULL 0

/**
 * _strchr -  locates a character in a string
 * @s: the string
 * @c: the character to be checked
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
