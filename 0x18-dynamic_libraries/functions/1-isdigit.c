#include "main.h"

/**
 * _isdigit - checks if the character is digit
 * @c: the integer to be checked
 * Return: Always 0
 */

int _isdigit(int c)
{

	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);

}
