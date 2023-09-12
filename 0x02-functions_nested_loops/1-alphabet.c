#include <stdio.h>
#include "main.h"
/**
 * main - Code entry point
 * Description: Print alphabets in lowercase with new line
 * Use _putchar twice only
 * Funtion prototype
 * void print_alphabet(void);
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
