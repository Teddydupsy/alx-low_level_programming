#include <stdio.h>
#include <main.h>
/**
 * main - Code entry point
 * Description: Print alphabets in lowercase with new line
 * Use _putchar twice only
 * Funtion prototype
 * void print_alphabet(void);
 * Return: 0
 */
int main(void)
{
	print_alphabet (void);
	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
	{
		_putchar(print_alphabet);
	}
	_putchar('\n');
	return (0);
}
