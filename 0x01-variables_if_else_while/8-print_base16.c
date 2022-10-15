#include <stdio.h>

/**
 * main - Print all the numbers of base 16
 *        in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	int num = 0;
	char alpha = 'a';

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
