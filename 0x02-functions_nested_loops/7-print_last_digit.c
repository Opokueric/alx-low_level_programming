#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *@n: integer whose last digit we want to find
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = -1 * (n % 10);
		_putchar(ld + 48);
		return (ld);
	}
	else
	{
		ld = n % 10;
		_putchar(ld + 48);
		return (ld);
	}
}
