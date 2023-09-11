#include <stdio.h>
/**
 * main - The main block
 * Decsription: Print all single-digits using only 'putchar'
 * Putchar can only b used twice in the code
 * Not allowed to use variable of type 'char'
 * Return: 0
 */
int main(void)
{
	int Num;

	for (Num = 48; Num <= 57; Num++)
	{
		putchar(Num);
	}
	putchar('\n');
	return (0);
}
