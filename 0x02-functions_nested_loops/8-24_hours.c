#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int p = 0;
	int x = 0, y = 0, z = 0, m = 0;

	while (p < 1440)
	{
		_putchar(x + '0');
		_putchar(y + '0');
		_putchar(':');
		_putchar(z + '0');
		_putchar(m + '0');
		_putchar('\n');

		m++;
		if (m > 9)
		{
			m = 0;
			z++;
		}
		if (z > 5)
		{
			z = 0;
			y++;
		}
		if (y > 9)
		{
			y = 0;
			x++;
		}
		p++;
	}
}
