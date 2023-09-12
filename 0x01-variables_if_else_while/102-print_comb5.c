#include <stdio.h>
/**
 * main - Software is eating the world
 * Descrip: Combination of 2 digits printed in ascending order
 * 00, 01, and 01, 00 are considered as same combo.
 * Use putchar and no variable of type 'char'
 * Return: 0
 */
int main(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 < 99; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 <= 99; num_2++)
		{
			putchar(num_1 + '0');
			putchar(num_1 + '0');
			putchar(' ');
			putchar(num_2 + '0');
			putchar(num_2 + '0');

			if (num_1 == 98 && num_2 == 99)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
