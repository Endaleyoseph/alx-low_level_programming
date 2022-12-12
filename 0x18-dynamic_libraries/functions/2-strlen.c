#include "main.h"
#include <stdio.h>

/**
 * _strlen - counts the string
 * @s: the string to be counted
 * Return: the number of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
