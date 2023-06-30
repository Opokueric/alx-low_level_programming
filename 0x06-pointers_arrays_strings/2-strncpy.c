#include "main.h"

/**
 * _strncpy - function to copy string
 *
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of chars
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		if (src[x] == '\0')
		{
			for (y = x; y < n && dest[y] != '\0'; y++)
				dest[y] = '\0';
			break;
		}
		dest[x] = src[x];
	}

	return (dest);
}
