#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, ii;

	for (i = 0; i < 10; i++)
	{
		for (ii = 0; ii <= 14; ii++)
		{
			if (ii > 10)
			{
				_putchar('1');
			}

			_putchar(ii % 10 + '0');
		}

		_putchar('\n');
	}
}
