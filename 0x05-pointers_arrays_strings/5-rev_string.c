#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer string
 *
 * Return: no value
 */

void rev_string(char *s)
{
	int len = 0, y, p;
	char x;

	while (*(s + len) != '\0')
	{
		++len;
	}
	p = len;
	len--;
	for (y = 0; y < p / 2; y++)
	{
		x = *(s + y);
		*(s + y) = *(s + len);
		*(s + len) = x;
		--len;
	}
}
