#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - return the length of the string
 * @str: string
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * argstostr - concatenates all the argument
 * @ac: size of av
 * @av: array of arguments
 * Return: pointer to the string, or NULL unp on failure
 */

char *argstostr(int ac, char **av)
{
	char *str = "";
	int i, k, L;
	int j;

	L = 0;
	k = 0;
	i = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		L += _strlen(av[i]);
		i++;
	}
	L += (ac + 1);

	str = malloc(L * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}
	return (str);
}
