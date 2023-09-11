#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	/*Declare a variables of type 'int'*/
	int num;

	for (num = 48; num <= 63; num++)
	{
		putchar("%x", num)
	}
	putchar('\n');
	return (0);
}
