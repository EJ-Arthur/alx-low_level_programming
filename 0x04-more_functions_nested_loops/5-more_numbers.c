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
			if (ii > 10)
			{
				_putchar('1');
			}

			_putchar(ii % 10 + '0');
		}

		_putchar('\n');
		i++;
	}
}
