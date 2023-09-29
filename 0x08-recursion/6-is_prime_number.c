#include "main.h"
/**
 * helperFunction - Function that prints factors of a number
 * @num: number to check
 * @i: factors of the number
 * Return: 1 if factor is prime, 0 if not
 */
int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - Function that checks if number is prime
 * @n: The number to check
 * Return: 1 if input integer is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
