#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Functions that prints numbers, followed by a new line.
 * @separator: This is the string to be printed between numbers
 * @n: Number of integers passed to the function
 * @...: Variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list line;
	unsigned int num;

	va_start(line, n);
	num = 0;
	while (num < n)
	{
		printf("%d", va_arg(line, int));
		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
		num++;
	}
	printf("\n");
	va_end(line);
}
