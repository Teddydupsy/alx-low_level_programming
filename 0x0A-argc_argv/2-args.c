#include <stdio.h>
#include "main.h"
/**
 * main - Program that prints all arguments it receives
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int jay = 0;

	while (jay < argc)
	{
		printf("%s\n", argv[jay]);
		jay++;
	}
	return (0);
}
