#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints strings.
 * @separator: A string that separate.
 * @n: The number of args.
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		char *b = va_arg(p, char *);

		if (b == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", b);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
