#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	/*Declare two variables of type 'int'and 'char'*/
	int num;
	char alpha;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
