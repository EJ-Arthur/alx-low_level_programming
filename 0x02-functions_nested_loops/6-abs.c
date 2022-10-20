#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Return: Always 0.
 * @c: the number to be checked
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		c = c * -1;
		return (c);
	}
}
