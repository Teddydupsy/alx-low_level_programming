#include <stdio.h>
/**
 * main - Print combinations of two different numbers
 * Descript: The coombo should be separated by comma followed by a space
 * Numbers should be printed in ascending order using 'putchar'
 * Do not use a variable of type 'char'
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			putchar((num1) + '0');
			putchar((num2) + '0');

			if (num1 < 56 || num2 < 57)
			{
			putchar(44);
			putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
