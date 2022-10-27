#include "main.h"

/**
 * get_bit - gets a bit at the index
 * @n: number in decimal
 * @index: index at which bit is taken
 * Return: 1 if it exists, 0 if not
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index))
		return (1);

	return (0);
}
