#include "main.h"
/**
 * _pow_recursion - Funtion returns the value of x raised to power y
 * @x: to raise to the power of y
 * @y: the power
 * Return: -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
