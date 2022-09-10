#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Alwasy 0 (Success)
 */

int main(void)
{

	char counter;

	for (counter = 'a'; counter <= 'z'; counter++)
	{
		if (counter != 'e' && counter != 'q')
			putchar(counter);
	}

	putchar('\n');

	return (0);

}
