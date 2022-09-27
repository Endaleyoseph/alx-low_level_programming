#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of matrixes
 * @a: array of integers
 * @size: size of the array
 * Return: sum of the diagonal
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0;
	int sum_1 = 0;
	int sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		j = (i * size) + i;
		sum_1 += a[j];
	}
	for (i = 1; i <= size; i++)
	{
		j = (i *size) - i;
		sum_2 += a[j];
	}
	printf("%d, %d", sum_1, sum_2);
}
