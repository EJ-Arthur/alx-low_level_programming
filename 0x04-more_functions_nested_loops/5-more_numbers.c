#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i = 0, ii;

	while (i < 10)
	{
		for (ii = 0; ii <= 14; i++)
		{
			_putchar(ii);
		}

		_putchar('\n');
		i++;
	}
}
