#include "main.h"

/**
 * _pow_recursion - calculates the power of a number
 * @x: the number to be calculated
 * @y: the power;
 * Return: x the power of y
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
