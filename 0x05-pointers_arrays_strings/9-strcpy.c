#include "main.h"

/**
 * *_strcpy - copies string to given memory location
 * @dest: location of string for coping
 * @src: pointed to by
 *
 * Return: char dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = *(src + len);

	return (dest);
}
