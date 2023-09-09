#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n; int Last_num = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of " "%d is ", n);
	if (Last_num > 5)
	{
		printf(Last_num "and is greater than 5");
	}
	else if (Last_num == 0)
	{
		printf(Last_num "and is 0");
	}
	else
	{
		printf(Last_num "and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
