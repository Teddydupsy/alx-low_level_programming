#include<stdio.h>
/**
 * main - Print all single digits of base 10 
 * Return: Always 0
 */
int main(void)
{
	int Numbers;

	for (Numbers = 48; Numbers < 58; Numbers++)
	{
		putchar(Numbers);
	}
	putchar('\n');
	return (0);
}
