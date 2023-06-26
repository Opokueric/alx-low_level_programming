#include <stdio.h>
#include "main.h"

/**
 * print_array - prints first n elements of array
 * @a: integer array
 * @n: no of elements
 *
 * Return: no value
 */

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		if (x == n - 1)
			printf("%d", *(a + x));
		else
			printf("%d, ", *(a + x));
		x++;
	}
	printf("\n");
}
