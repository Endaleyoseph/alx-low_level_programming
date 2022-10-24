#include <unistd.h>

/**
 * _putchar - writes the character to the buffer
 * @c: character to be printed
 * Retrun: 1 upon success or
 * -1 if the function fails
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
