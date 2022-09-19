#include "main.h"

/**
 * print_rev - reverses a string
 * @s: string being reversed
 * Return: Always 0
 */

void print_rev(char *s)
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

