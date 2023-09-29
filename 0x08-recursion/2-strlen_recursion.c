#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of string
 * @s: The string
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
