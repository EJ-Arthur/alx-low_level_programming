#include "main.h"

/**
 * print_alphabet - print all alpahbets in lowercase
 */

void print_alphabet(void)
{
	char lett = 'a';

	while (lett <= 'z')
	{
		_putchar(lett);
		lett++;
	}

	_putchar('\n');
}
