#include "main.h"
/**
 * _puts_recursion - A funcion that prints a string folloed by a new line
 * @s: String in use
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
