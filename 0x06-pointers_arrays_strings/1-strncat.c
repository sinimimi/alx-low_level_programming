#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: string to append to
* @src: string whose characters to append to dest
* @n: maximum characters to copy from src
*
* Description:
* it will use at most n bytes from src
* src does not need to be null-terminated if it contains n or more bytes
*
* Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *new_dest = dest;

	/* navigate to the end of dest */
	while (*dest)
		dest++;

	/* append at most n characters to src */
	while (*src && (i < n))
	{
		*dest++ = *src++;
		i++;
	}

	/* add the terminating null byte */
	*dest = '\0';

	return (new_dest);

}
