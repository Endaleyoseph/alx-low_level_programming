#include "main.h"

/**
 * _puts_recursion - print string with new line
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recrusion(s + 1);
}
