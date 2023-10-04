#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - function that returns a pointer to a newly 
 * allocated space in memory
 * @str: Input string.
 * Return: - returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	size_t len = strlen (str);
	char *a = (char *)malloc((len + 1)* sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	strcpy (a, str);
	return (a);
}
