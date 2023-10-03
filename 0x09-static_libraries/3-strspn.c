#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: string in use
 * @accept: substring
 * Return: number of bytes in s
 * which consiste only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int memo = 0;
	int place;

	while (*s)
	{
		place = 0;
		while (accept[place])
		{
			if (*s == accept[place])
			{
				memo++;
				break;
			}
			else if (accept[place + 1] == '\0')
				return (memo);
			place++;
		}
		s++;
	}
	return (memo);
}
