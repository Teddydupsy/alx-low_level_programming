#include "main.h"
/**
 * _abs - Compute absolute value of an integer
 * @var: is the integer to check
 * Return: the absolute value of that integer
 */
int _abs(int var)
{
	if (var >= 0)
	{
		return (var);
	}
	return (-var);
}
