#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * return - void
 */

void rev_string(char *s)
{
	int i, x, y;

	for (; s[i];)
		i++;
	y = 0;
	char d[i];

	for (x = i; x >= 0; x--)
	{
		d[y] = s[x];
		_putchar(d[y]);
		y++;
	}
	_putchar('\n');
}
