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
	int j = 0;
	char *sep = ", ";

	va_list p;

	va_start(p, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(p, int));
			break;
			case 'i':
			printf("%d", va_arg(p, int));
			break;
			case 'f':
			printf("%f", va_arg(p, double));
			break;
			case 's':
			{
			char *str = va_arg(p, char *);
			if (str == NULL)
			{
			printf("(nil)");
			}
			printf("%s", str);
			}
			break;
		}
		if (j < i)
		{
		printf("%s", sep);
		}
		i++;
	}
	printf("\n");
}
