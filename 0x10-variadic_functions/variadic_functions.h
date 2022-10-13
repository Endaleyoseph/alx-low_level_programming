#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct data - composed of character and pointer to function
 * @c: character
 * @fun: pointer to function
 *
 * Description: contains two elements. the first being character
 * and a pointer to function
 */

typedef struct data
{
	char c;
	void (*fun)(va_list);
} data_t;

#endif
