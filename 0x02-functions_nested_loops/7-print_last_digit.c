#include "main.h"

/**
 * print_last_digit - prints the last difit of a number
 * Return: Always 0
 * @c: number to be checked
 */

int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
