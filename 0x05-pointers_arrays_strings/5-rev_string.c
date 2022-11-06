#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * return - void
 */

void rev_string(char *s)
{
	int i, x, y = 0;
	char d;

	for (; s[i];)
		i++;
	y = i - 1; /*size of the string */

	for (x = i; y >= 0 && x < y ; x++, y--)
	{
		d = s[x];
		s[x] = s[y];
		s[y] = d;
	}
	_putchar('\n');
}
