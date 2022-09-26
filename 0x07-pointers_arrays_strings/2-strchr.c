#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: the string
 * @c: the character to be checked
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	char *p = s;
	int i = 0;

	while (*s != c)
	{
		s++;
		i++;
	}
	if (*s == c)
	{
		return (p + i);
	}
	else
	{
		return (0);
	}
}
