#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime
 *
 * Return: 0 if success
 */

int main(void)
{
	long int max = -1, x = 612852475143;
	int y = 3;

	while (x % 2 == 0)
	{
		max = 2;
		x /= 2;
	}
	while (y <= sqrt(n))
	{
		while (x % y == 0)
		{
			max = y;
			x = x / y;
		}
		y += 2;
	}
	if (x > 2)
		max = x;
	printf("%ld\n", max);

	return (0);
}
