#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @num: is the number to get its last digit
 * Return: the value of the last digit
 */
int print_last_digit(int num)
{
	int last;

	if (num < 48)
	{
		num = -num;
		putchar(num + '0');
		last = num % 10;

		if (last < 48)
		{
			last = -last;
		}
		_putchar(last + '0');
	}
		return (last);
}
