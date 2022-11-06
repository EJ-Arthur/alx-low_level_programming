#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a newline
 * @s: string to be printed
 * return - void
 */

void print_rev(char *s)
{
	int i;

	for (i = -1; s[i]; i--)
		_putchar(s[i]);
	_putchar('\n');
}
