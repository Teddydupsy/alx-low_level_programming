#include "main.h"
/**
 * string_toupper - Function that changes lowercase of a string to uppercase
 * @cap: pointer to string
 * a: length of string
 * Return: 0
 */
char *string_toupper(char *cap)
{
	int a = 0;

	while (cap[a] != '\0')
	{
		if (cap[a] >= 97 && cap[a] <= 122)
		{
			cap[a] = cap[a] - 32;
		}
		a++;
	}
	return (cap);
}
