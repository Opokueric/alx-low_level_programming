#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 without using standard functions
 *
 *
 * Return: void
 */

void print_numbers(void)
{
	int x = 48;

	while (x < 58)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
