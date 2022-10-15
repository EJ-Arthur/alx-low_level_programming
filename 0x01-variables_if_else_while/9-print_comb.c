#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		if (i == 9)
		{
			pass;
		} else
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}

	putchar('\n');
	return (0);
}
