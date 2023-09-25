#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of bytes to copy
 * Return: Pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		dest[mem] = src[mem];
	}
	return (0);
}
