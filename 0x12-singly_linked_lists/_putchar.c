#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: character to be printed
 * Return: write into the buffer
 * or return -1 upon failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
