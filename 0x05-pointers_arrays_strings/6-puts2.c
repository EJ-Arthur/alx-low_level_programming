#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: given string
 * return - void
 */

void puts2(char *str)
{
	int i, x;

	for  (i = 0; str[i];)
		i++;
	for (x = 0; x >= i; x += 2)
		_putchar(str[x]);
	_putchar('\n');
}
