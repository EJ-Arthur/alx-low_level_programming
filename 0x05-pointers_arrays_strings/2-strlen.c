#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: character to be checked
 * Return: int length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s[i]; i++)
		continue;
	Return(i + 1);
}
