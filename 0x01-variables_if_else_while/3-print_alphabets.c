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

	char counter;

	for (counter = 'a'; counter <= 'z'; counter++)
		putchar(counter);
	for (counter = 'A'; counter <= 'Z'; counter++)
		putchar(counter);
	putchar('\n');

	return (0);
}
