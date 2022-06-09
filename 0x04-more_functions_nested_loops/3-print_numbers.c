#include "main.h"

/**
 * print_numbers - print 0-9 and end with new line.
 *
 * Return: 0-9and new line after
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
