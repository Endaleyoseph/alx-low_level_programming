#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 * Return: Always 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int x = n;
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (x > 0)
	{
		len++;
		x >>= 1;
	}
	len--;

	while (len >= 0)
	{
		if ((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0');

		len--;
	}
}
