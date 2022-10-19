#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description - print _putchar followed by a new line
 */

int main(void)
{
	char text[10] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
