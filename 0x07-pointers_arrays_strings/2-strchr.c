#include "main.h"
/**
 * _strchr - Function that locates a character in a string
 * @c: character to locate
 * @s: string to consider
 * Return: pointer to the first occurrence of c
 * NULL - if c is not found
 */
char *_strchr(char *s, char c)
{
	int word = 0;

	while (s[word] >= '\0')
	{
		if (s[word] == c)
			return (s + word);
		word++;
	}
	return ('\0');
}
