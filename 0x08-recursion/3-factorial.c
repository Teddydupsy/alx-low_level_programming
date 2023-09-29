#include "main.h"
/**
 * factorial - Function that returns the factorial of a given number
 * @n: the number
 * Return: -1 if n is less than 0 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
