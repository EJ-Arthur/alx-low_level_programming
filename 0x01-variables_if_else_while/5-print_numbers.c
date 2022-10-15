#inlude < stdio.h >

/**
 *main - Entry point
 *
 *Description: Print all single digit numbers of base 10 starting from 0
 *followed by a new line.
 *
 *Return: always 0 (success)
 *
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
