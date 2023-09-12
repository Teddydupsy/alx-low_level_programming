#include <stdio.h>
/**
 * main - Print 3 digits conbo of different type
 * Descrip: Must be in ascending order
 * Separated by a commafollowed by a space
 * Return: 0
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 7; num1++)
	{
		for (num2 = num1 + 1; num2 <= 8; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num3++)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');

				if (num1 < 7 || num2 < 8 || num3 < 9)
				{
				putchar(',');
				puchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
