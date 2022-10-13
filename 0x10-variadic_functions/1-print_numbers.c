#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers from args
 * @separator: string tto separate
 * @n: number of numbers to be printed
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			if (separator == NULL)
				return;

			if (i > 0)
				printf("%s", separator);
			printf("%d", va_arg(ap, int));
		}
		va_end(ap);
	}
	printf("\n");
}
