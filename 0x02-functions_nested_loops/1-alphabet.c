#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

int print_alphabet(void)
{
	char lett = 'a';

	while (lett <= 'z')
	{
		_putchar(lett);
		_putchar('\n');
		lett++;
	}

	return (0);
}
