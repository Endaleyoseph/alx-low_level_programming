#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings of arguments
 * @separator: separates strings
 * @n: number of strings to be printed
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			if (separator == NULL)
				return;

			if (i > 0)
				printf("%s", separator);

			s = va_arg(ap, char *);

			if (s == NULL)
			{
				printf("(nil)");
				return;
			}
			printf("%s", s);
		}
		va_end(ap);
	}
	printf("\n");
}
