#include <stdio.h>
/**
 * main - All code in main block
 * Description: All possible combination of single-digits
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
	if (digit < 57)
	{
		putchar(44);
		putchar(32);
	}
	}
	putchar('\n');
	return (0);
}
