#include  "main.h"

/**
 * flip_bits - gets  number of bits you would need to flip
 * @n: the first number
 * @m: the second number
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;
	unsigned long int diff;

	diff = n ^ m;

	while (diff > 0)
	{
		num_bits += (diff & 1);
		diff >>= 1;
	}

	return (num_bits);
}
