#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: character to initialize the array with
 *
 * Return: pointer to created array. Otherwise NULL if size is 0
 * or the function fails
 */
char *create_array(unsigned int size, char c)
{
	char *buffer = malloc(sizeof(char) * size);
	unsigned int i;

	if (buffer == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
