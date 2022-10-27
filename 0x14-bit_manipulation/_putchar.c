#include <unistd.h>

/**
 * _putchar - prints char
 * @c: char to be printed
 * Return: 1 if successful, -1 if it fails
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
