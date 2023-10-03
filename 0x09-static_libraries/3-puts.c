#include "main.h"
/**
 * _puts - Function that prints a string
 * @str: is the string variable
 * Return: The string and new line
 */
void _puts(char *str)
{
	int let = 0;

	while (str[let])
	{
		_putchar(str[let]);
		let++;
	}
	_putchar('\n');
}
