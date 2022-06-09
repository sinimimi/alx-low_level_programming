#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string containing number to be converted
*
* Description:
* The number in the string can be preceded by an infinite number of characters
* You need to take into account all the - and + signs before the number
* If there are no numbers in the string, the function must return 0
*
* Return: integer in s if has a number. Otherwise 0
*/
int _atoi(char *s)
{
	int count_dash = 0;
	int found_num = 0;
	unsigned int value = 0;

	while (*s)
	{
		/* check if you have found a number */
		if (found_num)
		{
			/* break if the current character is not a digit */
			if (*s < '0' || *s > '9')
				break;
			/* if the current number is a digit, add it to the value found */
			else
				value = (value * 10) + (*s - '0');
		}
		else
		{
			/* check if the current character is not a digit */
			if (*s < '0' || *s > '9')
			{
				if (*s == '-')
					count_dash++;
			}
			else
			{
				value = (*s - '0');
				found_num = 1;
			}
		}
		s++;
	}

	/* check if the found number is negative */
	if (found_num && (count_dash % 2))
		value = -value;

	return (value);
}
