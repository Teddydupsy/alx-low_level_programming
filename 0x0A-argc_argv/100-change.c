#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int fig, lit, answer;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	fig = atoi(argv[1]);
	answer = 0;
	if (fig < 0)
	{
		printf("0\n");
		return (0);
	}
	for (lit = 0; lit < 5 && fig >= 0; lit++)
	{
		while (fig >= coins[lit])
		{
			answer++;
			fig -= coins[lit];
		}
	}
	printf("%d\n", answer);
	return (0);
}
