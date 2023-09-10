#include <stdio.h>
/**
 * main - lower and UPPERCASE
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphaBET;

	for (alphaBET = 'a'; alphaBET <= 'z'; alphaBET++)
	{
		putchar(alphaBET);'\n'
	}
	for (alphaBET = 'A'; alphaBET <= 'Z' ; alphaBET++)
	{
		putchar(alphaBET);'\n'
	}
	return (0);
}
