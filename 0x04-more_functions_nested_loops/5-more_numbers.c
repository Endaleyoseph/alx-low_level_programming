#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 9, 10 times
 *
 * Return: Always 0
 */

void more_numbers(void)
{

	int i;
	int ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 0 ; ch <= 14; ch++)
		{

			if (ch > 9)
				_putchar(ch / 10 + '0');
			_putchar(ch % 10 + '0');

		}
		_putchar('\n');

	}

}
