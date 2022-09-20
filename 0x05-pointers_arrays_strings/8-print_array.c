#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of array integers
 * @a: pointer to the integer
 * @n: number of elementsbeing printed
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
