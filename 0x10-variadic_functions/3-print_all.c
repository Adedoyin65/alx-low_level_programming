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
	char *separator = " ";

	va_list p;

	va_start(p, format);


	while (format && format[i])
	{
		int j = 1;

		while (format[i] == ' ' || format[i] == '\t')
		{
			i++;
		}
		if (!format[i])
		{
			break;
		}
		switch (format[i])
		{
		case 'c':
		printf("%s%c", separator, va_arg(p, int));
		break;
		case 'i':
		printf("%s%d", separator, va_arg(p, int));
		break;
		case 'f':
		printf("%s%f", separator, va_arg(p, double));
		break;
		case 's':
			{
			char *str = va_arg(p, char *);

			if (str == NULL)
			{
			printf("%s(nil)", separator);
			}
			else
			{
			printf("%s%s", separator, str);
			}
			}
			break;
			default:
			j = 0;
		}
		if (j)
		{
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
