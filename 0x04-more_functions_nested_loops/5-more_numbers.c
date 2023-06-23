#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 *
 * Return: void
 */

void more_numbers(void)
{
	int x = 0, y, z;

	while (x < 10)
	{
		y = 0;
		while (y < 15)
		{
			z = y;
			if (y > 9)
				z = y / 10;
			_putchar('0' + z);
			if (y > 9)
				_putchar('0' + y % 10);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
