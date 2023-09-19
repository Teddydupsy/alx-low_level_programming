#include "main.h"
/**
 * _strlen - Returning the length of a string
 * @s: is the string in testing
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
