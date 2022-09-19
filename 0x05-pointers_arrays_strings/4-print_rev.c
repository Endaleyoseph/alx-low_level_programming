#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string being reversed
 * Return: Always 0
 */

void rev_string(char *s)
{
	int a, b, c, i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	a = 0;
	b = i - 1;

	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b--;
	}
}

