#include <stdio.h>

/**
 * main - Header
 *
 * Return: Always 0 (Pass)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		++lower;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		++upper;
	}
	putchar('\n');

	return (0);
}
