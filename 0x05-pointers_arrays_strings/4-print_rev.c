#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a newline
 * @s: string to be printed
 * return - void
 */

void print_rev(char *s)
{
	int i = 0, n;

	while (s[i])
		i++;
	for (n = i - 1; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
