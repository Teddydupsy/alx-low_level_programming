#include "main.h"
/**
 * _puts - Function that prints a string
 * @str: is the string variable
 * Return: The string and new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
