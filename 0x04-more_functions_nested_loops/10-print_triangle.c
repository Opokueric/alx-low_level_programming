#include "main.h"

/**
 * print_triangle - prints triangle using "#" character of a given size
 *@size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int x = 1, y = 0;

	if (size > 0)
	{
		if (size == 1)
		{
			_putchar(35);
			_putchar('\n');
		}
		else
		{
			while (x <= size)
			{	y = 0;
				while (y < size - x)
				{
					_putchar(' ');
					y++;
				}
				y = 0;
				while (y < x)
				{
					_putchar(35);
					y++;
				}
				_putchar('\n');
				x++;
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
