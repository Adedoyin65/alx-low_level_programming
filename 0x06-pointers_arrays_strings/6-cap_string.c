#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @str: The string.
 * Return: returns str.
 */

char *cap_string(char *str)
{
	int dan = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] =='(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			dan = 1;
		}
		else if (dan && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			dan = 0;
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}
	return (str);
}
