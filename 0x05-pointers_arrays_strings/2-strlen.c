#include "main.h"

/**
 * _strlen - length of a string
 *
 * @s: pointer to string
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		++len;

	return (len);
}
