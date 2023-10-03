#include "main.h"
/**
 * _strpbrk - function that searches a string of a set of bytes
 * @s: string to search
 * @accept: second string
 * Return: pointer to the byte in s that matches one of the bytes
 * NULL - if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int place;

	while (*s)
	{
		place = 0;
		while (accept[place])
		{
			if (*s == accept[place])
				return (s);
			place++;
		}
		s++;
	}
	return ('\0');
}
