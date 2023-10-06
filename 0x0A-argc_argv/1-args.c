#include <stdio.h>
#include "main.h"
/**
 * main - Program that prints the number of argument passed into it
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	/*ignore argv*/
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
