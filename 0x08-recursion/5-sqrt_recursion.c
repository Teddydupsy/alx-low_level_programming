#include "main.h"
/**
 * helperFunction - Function that checks if the square-root of a number exist
 * @num: number to check the square-root
 * @pSqrt: The possible square-root of number
 * Return: Square-root of number.
 */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else if ((pSqrt * pSqrt) > num)
	{
		return (-1);
	}
	else
	{
		return (helperFunction(num, pSqrt + 1));
	}
}
/**
 * _sqrt_recursion - Function that return natural square-root
 * @n: Number to get its square root
 * Return: Square-root of n
 * -1 if n does not have a suqrae-root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (helperFunction(n, 0));
	}
}
