#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte
 * @s: memory area
 * @b: character to copy
 * @n: number of times
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		s[mem] = b;
	}
	return (s);
}
