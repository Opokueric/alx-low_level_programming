#include "main.h"

/**
 * _islower - checks whether or not a character is lowercase
 * @c: value of character
 * Return: 1 if it is lowercase 0 else
 */

int _islower(int c);
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{	return (0);
	}
	_putchar('\n');
}
