#include "main.h"

/**
 * print_square - prints square using "#" character of a given size
 *@size: size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int i = 0, x;

	if (size > 0)
	{
		while (i < size)
		{
			x = 0;
			while (x < size)
			{
				_putchar(35);
				x++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
