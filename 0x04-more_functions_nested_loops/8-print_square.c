#include "main.h"

/**
 * print_square - prints a square
 * Return: void
 * @size: number of times # must be printed
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			while (size > 0)
			{
				_putchar('#');
				size -= 1;
			}

			_putchar('\n');
		}
	}
}
