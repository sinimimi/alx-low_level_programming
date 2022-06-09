#include "main.h"

/**
* rot13 -  encodes a string using rot13
* @str: string to be encoded
*
* Return: pointer to the encoded string
*/
char *rot13(char *str)
{
	/* conversion tables */
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char values[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = values[j];
				break;
			}
		}
	}

	return (str);
}
