#include <stdio.h>

/**
 * main - print all single difit numbers of base 10
 *       from 0 followed by a new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
