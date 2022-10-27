#include "main.h"

/**
 * clear_bit - clears the value of a bit to 1 at a given index.
 * @n: pointer to integer
 * @index: the index at which the bit is set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;
	unsigned long int x = *n;

	b = (sizeof(unsigned long int) * 8);
	if (index > b)
		return (-1);

	*n = (x & ~(1 << index));

	return (1);
}
