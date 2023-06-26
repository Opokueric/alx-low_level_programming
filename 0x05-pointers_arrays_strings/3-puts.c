#include "main.h"

/**
 * _puts - print a str to stdout
 *
 * @str: pointer to string
 * Return: no value
 */

void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		++len;
	}
	_putchar('\n');
}
