#include "main.h"

/**
 * print_rev - prints str in rev
 *
 * @s: pointer for str
 * Return: no value
 */

void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
