#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of dashs
 * Return: Always 0
 */

void print_line(int n)
{

	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('-');

	}
	_putchar('\n');

}
