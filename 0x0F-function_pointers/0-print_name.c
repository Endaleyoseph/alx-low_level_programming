#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: string tobe printed
 * @f: pointer to a void function that takes a string
 * Return: Always 0
 */

void print_name(char *name, void(*f)(char *))
{
	f(name);
}
