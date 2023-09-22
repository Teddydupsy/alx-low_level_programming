#include "main.h"
/**
 * leet - Function that encodes string into 1337
 * @d: pointer
 * Return: pointer
 */
char *leet(char *d)
{
	int a, b;
	char c[] = "aeotlAEOTL";
	char e[] = "4307143071";

	a = 0;
	while (d[a] != '\0')
	{
		for (b = 0; b < 10; b++)
		{
			if (d[a] == c[b])
			{
				d[a] = e[b];
			}
		}
		a++;
	}
	return (d);
}
