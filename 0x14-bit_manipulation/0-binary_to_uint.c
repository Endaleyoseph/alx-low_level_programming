#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: binary to be converted
 * Return: unsigned int, 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int length, i;

	if (b == NULL)
		return (0);

	length = 0;
	while (b[length] != '\0')
		length++;
	length -= 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			n += (1 << length);
		length--;
	}

	return (n);
}
