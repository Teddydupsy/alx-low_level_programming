#include "main.h"
/**
 * _strcmp - Function that compares two string
 * @s1: string in use to compare
 * @s2: string in use to compare
 * Return: Less than 0 if string is less, greater than 0 if string same
 */
int _strcmp(char *s1, char *s2)
{
	int read, compare;

	read = 0;
	while (s1[read] == s2[read] && s1[read] != '\0')
	{
		read++;
	}
	compare = s1[read] - s2[read];
	return (compare);
}
