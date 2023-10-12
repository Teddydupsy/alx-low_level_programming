#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Function that prints strings, followed by a new line.
 * @separator: The string to be printed between the strings
 * @n: Number of strings passed to the function
 * @...: Variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	char *wor;
	unsigned int value;

	va_start(words, n);
	value = 0;
	while (value < n)
	{
		wor = va_arg(words, char*);
		if (wor == NULL)
			printf("(nil)");
		else
			printf("%s", wor);
		if (value != (n - 1) && separator != NULL)
			printf("%s", separator);
		value++;
	}
	printf("\n");
	va_end(words);
}
