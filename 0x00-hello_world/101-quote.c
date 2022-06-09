#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints out the last part of a quote in the standard error.
 * - Dora Korpar, 2015-10-19
 * followed by a new line, to the standards error
 * Return: Always 1 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
