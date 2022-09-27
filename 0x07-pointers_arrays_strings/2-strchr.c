#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: the string
 * @c: the character to be checked
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			break;
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return ('\0');
}
