#include "main.h"

/**
 * _strncat - function to concatenate two strings and return a new string
 * with n elements of the appended string
 *
 * @dest: string 1
 * @src: string 2
 * @n: number of chars
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;
	char *a;

	while (*(dest + x) != '\0')
		x++;
	while (!(*(src + y) == '\0' || y == n))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	*(dest + x) = '\0';
	a = dest;

	return (a);
}
