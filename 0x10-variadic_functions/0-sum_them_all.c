#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: Number of parameters passed to the function
 * @...: Variable number of parameters to calculate it sum
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list be;
	unsigned int a, sum = 0;

	va_start(be, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(be, int);
	}
	va_end(be);
	return (sum);
}
