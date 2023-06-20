#include "main.h"

/**
 * print_alphabet_x10 -  prints the 10x the lowercase alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char al = 'a';
	int x, y;

	for (x = 0; x < 10; x++)
	
		for (y = 0; y < 26; y++)
		{
			_putchar(al + y);
		}
		_putchar(10);
	}
}
