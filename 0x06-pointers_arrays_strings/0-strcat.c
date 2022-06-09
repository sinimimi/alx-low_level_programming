#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string to be appended to
* @src: string whose contents to append to src
*
* Definition:
* This function appends the src string to the dest string,
* overwriting the terminating null byte (\0) at the end of dest,
* and then adds a terminating null byte
*
* Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char *new_dest = dest;

	/* navigate to the end of dest */
	while (*dest)
		dest++;

	/* copy all characters of src to dest */
	while (*src)
		*dest++ = *src++;

	/* add terminating null byte */
	*dest = '\0';

	return (new_dest);
}
