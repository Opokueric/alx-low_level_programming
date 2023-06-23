#include "main.h"

/**
 * print_diagonal - prints diagonal line using "\" character of y length
 *@y: line
 *
 * Return: void
 */

void print_diagonal(int y)
{
	int x = 1;

	if (y > 0)
	{
		_putchar(92);

		while (x < y)
		{
			int count = 0;

			_putchar('\n');
			while (count < x)
			{
				_putchar(' ');
				count++;
			}
			_putchar(92);
			x++;
		}
	}
	_putchar('\n');
}
