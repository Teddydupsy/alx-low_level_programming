#include "main.h"
/**
 * print_alphabet - Print all aplhabets in lowercase
 * Followed by a new line
 * Use _putchar twice only
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
