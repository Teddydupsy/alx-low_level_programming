#include<stdio.h>
/**
 * main - All leters except e and q
 * Return: Always 0
 */
int main(void)
{
	char Minus_eq;

	for (Minus_eq = 'a'; Minus_eq <= 'z' ; Minus_eq++)
	{
		if (Minus_eq != 'e' && Minus_eq != 'q')
			putchar(Minus_eq);
	}
	putchar('\n');
	return (0);
}
