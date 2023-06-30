#include "main.h"

/**
 * leet - converts string to leet
 *
 * @p: string
 * Return: char p
 */

char *leet(char *p)
{
	int x = 0, y;
	char a[] = {'a', 'e', 'o', 't', 'l'}, b[] = {'A', 'E', 'O', 'T', 'L'},
	leet[] = {'4', '3', '0', '7', '1'};

	while (p[x] != '\0')
	{
		y = 0;
		while (y < 5)
		{
			if (p[x] == a[y] || p[x] == b[y])
				p[x] = leet[y];
			y++;
		}
		x++;
	}

	return (p);
}
