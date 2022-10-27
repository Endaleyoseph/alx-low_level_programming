#include "main.h"

/**
 * get_bit - gets a bit at the index
 * @n: number in decimal
 * @index: index at which bit is taken
 * Return: 1 if it exists, 0 if not
 * -1 when error occures
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bit;
	int bit;

	max_bit = (sizeof(unsigned long int) * 8);
	if (index > max_bit)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
