#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the string to be compared
 * @s2: the string to be compared
 * Return: first and second string
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}
