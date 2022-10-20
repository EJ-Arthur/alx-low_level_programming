#include "main.h"

/**
 * print_sign - prints the sign of a number
 * Return: 1 if positive, 0 if zero, -1 if negative
 *@n: number to be checked
 */

int print_sign(int n)
	if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n > 0)
	{
		_putchar('1');
		return (1);
	} else if (n < 0)
	{
		_putchar('-1');
		return (-1);
	}
