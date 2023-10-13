#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Function that prints anything
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *word, *spa = "";

	va_list fig;

	va_start(fig, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", spa, va_arg(fig, int));
					break;
				case 'i':
					printf("%s%d", spa, va_arg(fig, int));
					break;
				case 'f':
					printf("%s%f", spa, va_arg(fig, double));
					break;
				case 's':
					word = va_arg(fig, char *);
					if (*word)
						word = "(nil)";
					printf("%s%s", spa, word);
					break;
				default:
					a++;
					continue;
			}
			spa = ",";
			a++;
		}
	}
	printf("\n");
	va_end(fig);
}
