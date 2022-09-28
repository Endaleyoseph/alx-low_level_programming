#include "main.h"

/**
 * primechecker - checks if n is a prime
 * @n: the number to be checked
 * @i: testing number
 * Return: 1 for prime or 0 if not
 */

int primechecker(int n, int i)
{
	if ((i != 1 && i != n) && (n % i == 0))
	{
		return (0);
	}
	else if (i > n)
	{
		return (1);
	}
	else
	{
		return (primechecker(n, i + 1));
	}
}

/**
 * is_prime_number - takes number and check if it is prime number
 * @n: number to be checked
 * Return: 1 for prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
	{
		return (0);
	}
	return (primechecker(n, 1));
}
