#include "main.h"

/**
 * reverse_array - prints integers of array in reverse
 * @a: the array of numbers
 * @n: thenumber of elements in the array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
