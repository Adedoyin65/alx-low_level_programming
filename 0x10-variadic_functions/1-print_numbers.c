#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers.
 * @separator: The string in between number.
 * @n: The number of integer.
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list p;

	if (separator == NULL)
	{
		return;
	}

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
