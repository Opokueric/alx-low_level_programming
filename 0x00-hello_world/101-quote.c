#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main- Nothing to show, header
 *
 * Description: UNIX is basically a simple operating system
 *
 * Return: If 1 (Success)
 */

int main(void)
{
	int s;

	s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(3,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);
	return (1);
}

