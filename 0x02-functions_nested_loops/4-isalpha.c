#include "main.h"

/**
 * _isalpha - checks whether or not a character is an alphabet
 * @c: ascii
 * Return: 1 for lowercase or 0 or else
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{	return (0);
	}
	_putchar('\n');
}
