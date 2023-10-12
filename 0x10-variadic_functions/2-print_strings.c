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
		if (va_arg(p, char *) == NULL)
		{
			printf("(nil)");
		}
		printf("%s", va_arg(p, char *));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
