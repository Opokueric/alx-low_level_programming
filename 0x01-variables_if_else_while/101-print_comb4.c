#include <stdio.h>

/**
 * main - Entry point
 * Description:Numbers must be separated by ,, followed by a spac
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;
	int v = 48;
	int y = 48;

	while (x < 58)
	{
		v = 48;
		while (v < 58)
		{
			y = 48;
			while (y < 58)
			{
				if (x != v && v != y && x != y && x < v && v < y)
				{
					putchar(x);
					putchar(v);
					putchar(y);
					if (!(x == 55 && v == 56 && y == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
				++y;
			}
			++v;
		}
		++x;
	}
	putchar('\n');

	return (0);
}
