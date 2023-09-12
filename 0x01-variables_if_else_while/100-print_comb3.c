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

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 ==9 && num2 == 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
