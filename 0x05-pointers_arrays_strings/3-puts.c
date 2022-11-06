#include "main.h"

/**
 * _puts - prints a string followed by
 * a new line to stdout
 * Return - void
 * @str: string to print
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
