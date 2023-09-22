#include <stdio.h>

/**
 * leet - write a function that encodes a string into 1337.
 * @str: The string.
 * Return: returns str.
 */

char *leet(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		char dan = *ptr;

		if (dan == 'a' || dan == 'A')
		{
			*ptr = '4';
		}
		else if (dan == 'e' || dan == 'E')
		{
			*ptr = '3';
		}
		else if (dan == 'o' || dan == 'O')
		{
			*ptr = '0';
		}
		else if (dan == 't' || dan == 'T')
		{
			*ptr = '7';
		}
		else if (dan == 'l' || dan == 'L')
		{
			*ptr = '1';
		}
		ptr++;
	}
	return (str);
}
