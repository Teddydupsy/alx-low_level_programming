#include <stdio.h>
#include "main.h"
/**
 * _atoi - Function that converts a string into an integer
 * @s: String to convert
 * Return: The resulting integer
 */
int _atoi(char *s)
{
	int a, b, c, count, d, num;

	a = 0;
	b = 0;
	c = 0;
	count = 0;
	d = 0;
	num = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	while (a < count && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (d % 2)
				num = -num;
			c = c * 10 + num;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}

/**
 * main - Program that multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int got, digit1, digit2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	digit1 = _atoi(argv[1]);
	digit2 = _atoi(argv[2]);
	got = digit1 * digit2;
	printf("%d\n", got);
	return (0);
}
