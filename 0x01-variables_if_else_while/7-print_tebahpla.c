#include <stdio.h>
/**
 * main - All in block
 * Decription: Print all lowercase letters in reverse
 * Use only 'putchar'
 * Return: 0
 */
int main(void)
{
	char Rev_let;

	for (Rev_let = 'z'; Rev_let >= 'a' Rev_let--)
	{
		putchar(Rev_let);
	}
	putchar('\n');
	return (0);
}
