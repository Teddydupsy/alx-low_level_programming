#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - Function to check string for digits
 * @str: Array of string to check
 * Return: 0 (Success)
 */
int check_num(char *str)
{
	unsigned int number;

	number = 0;
	while (number < strlen(str))
	{
		if (!isdigit(str[number]))
		{
			return (0);
		}
		number++;
	}
	return (1);
}
/**
 * main - Program that adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int length, style, add;

	add = 0;
	length = 1;
	while (length < argc)
	{
		if (check_num(argv[length]))
		{
			style = atoi(argv[length]);
			add += style;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		length++;
	}
	printf("%d\n", add);
	return (0);
}
