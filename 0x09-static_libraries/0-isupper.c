#include "main.h"
/**
 * _islower - Code to check lowercase letter
 * @c: is the char to be checked
 * Return: 1 if c is uppercase, else 0
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
