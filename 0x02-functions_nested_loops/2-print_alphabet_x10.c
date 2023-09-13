#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase alphabets 10 times
 * To be followed by a new line
 * _putchar to be used only twice
 */
void print_alphabet_x10(void)
{
	int times;
	char letters;

	times = 0;

	while (times < 10)
	{
		letters = 'a';
		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar('\n');
		times++;
	}
}
