#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char count;

	for (count = 'a'; count <= 'z'; count++)
		putchar(count);
	putchar('\n');

	return (0);
}
