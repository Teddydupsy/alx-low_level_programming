#include<stdio.h>
/**
 * main - Print all single digits of base from 0
 * Return: Always 0
 */
int main(void)
{
	int Numbers;
	
	for (Numbers = '0'; Numbers < 10 ; Numbers++)
	{
		putchar(Numbers);
	}
	putchar('\n');
	return (0);
}
