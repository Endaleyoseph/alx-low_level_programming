#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @ap: argument to va_arg
 *
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints a number
 * @ap: argument to va_arg
 *
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints number with floating point
 * @ap: argument to va_arg
 *
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: arg to va_arg
 *
 */

void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints any data type
 * @format: string for formatting
 *
 */

void print_all(const char * const format, ...)
{
	data_t ch[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	int i, j;
	va_list ap;
	char *s = "";

	i = 0;
	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (ch[j].c != '\0')
		{
			if (ch[j].c == format[i])
			{
				printf("%s", s);
				ch[j].fun(ap);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
