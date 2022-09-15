#include "main.h"

/**
 * print_diagonal - prints space and / diagonally
 * @n: number of times / should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{

	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');

}
