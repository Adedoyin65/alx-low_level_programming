#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  a function that prints anything.
 * @format: Various data type.
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list p;
	unsigned int i = 0, j, c = 0;
	char *str;
	const  char a[] = "cifs";

	va_start(p, format);
	while (format && format[i])
	{
		j = 0;
		while (a[j])
		{
			if (format[i] == a[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(p, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(p, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(p, double)), c = 1;
				break;
			case 's':
				str = va_arg(p, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	va_end(p);
	printf("\n");
}
