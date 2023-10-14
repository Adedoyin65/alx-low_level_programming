#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  a function that prints anything.
 * @format: Various data type.
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = ", ";

	va_list p;

	va_start(p, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			printf("%c%s", va_arg(p, int), sep);
			break;
			case 'i':
			printf("%d%s", va_arg(p, int), sep);
			break;
			case 'f':
			printf("%f%s", va_arg(p, double), sep);
			break;
			case 's':
			printf("%s", va_arg(p, char *));
			break;
		}
		i++;
	}
	printf("\n");
}
