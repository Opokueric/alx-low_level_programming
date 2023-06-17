#include <stdio.h>

/**
 * main - Header entry point
 *
 * Return: If  0 (Success)
 */

int main(void)
{
	char x = 'z';

	while (x > 'a')
	{
		putchar(x);
		--x;
	}
	putchar('\n');

	return (0);
}
