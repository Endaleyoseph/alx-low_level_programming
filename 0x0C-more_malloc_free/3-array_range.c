#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array
 * @min: the minimum value of the element
 * @max: the maximum value of the element
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, n;

	n = max - min + 1;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * n);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
