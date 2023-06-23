#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 *
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int x = 48;

	while (x < 58)
	{
		if (!(x == '2' || x == '4'))
			_putchar(x);
		x++;
	}
	_putchar('\n');
}
