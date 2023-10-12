#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its own opcodes
 * @argc: Arguments numbers
 * @argv: Array of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int size, gra;
	char *rad;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	rad = (char *)main;
	for (gra =0; gra < size; gra++)
	{
		if (gra == size - 1)
		{
			printf("%02hhx\n", rad[gra]);
			break;
		}
		printf("%02hhx", rad[gra]);
	}
	return (0);
}
