#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 followed by a new line and replaces
 * Fizz, Buzz or FizzBuzz if the number is a multiple of 3, 5
 *
 * Return: 0 if success
 */

int main(void)
{
	int x = 1, y = 2;

	printf("%d", x);
	while (y < 101)
	{
		if (y % 3 == 0 && y % 5 == 0)
			printf(" FizzBuzz");
		else if (y % 3 == 0)
			printf(" Fizz");
		else if (y % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", y);
		y++;
	}
	printf("\n");

	return (0);
}
