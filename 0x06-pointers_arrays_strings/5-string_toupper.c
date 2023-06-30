#include "main.h"

/**
 * string_toupper - function to transform all lowercase in string to uppercase
 *
 * @p: string
 * Return: char
 */

char *string_toupper(char *p)
{
	int x = 0;

	while (p[x] != '\0')
	{
		if (p[x] > 96 && p[x] < 123)
			p[x] -= 32;
		x++;
	}
	return (p);
}
