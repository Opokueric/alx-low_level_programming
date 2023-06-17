#include <stdio.h>

/**
 * main - Header
 *
 * Return: If 0 (Success)
 */

int main(void)
{
	int x = 48;
	int v = 48;

	while (x < 58)
	{
		v = 48;
		while (v < 58)
		{
			if (x != v && x < v)
			{
				putchar(x);
				putchar(v);

				if (!(x == 56 && v == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			++v;
		}
		++x;
	}
	putchar('\n');

	return (0);
}
