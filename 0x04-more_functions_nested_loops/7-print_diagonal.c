#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * Return: Void
 * @n: number of times _ must be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for  (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('_');
		_putchar('\n');
	}
}
