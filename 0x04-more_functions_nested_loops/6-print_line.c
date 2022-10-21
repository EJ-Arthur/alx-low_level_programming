#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * Return: void
 * @n: number of times _ must be printed
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n += 1;
		}

		_putchar('\n');
	}
}
