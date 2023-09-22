#include "main.h"
/**
 * _strncpy - Function that copies string
 * @dest: working this
 * @src: this as well
 * @n: using n number bytes
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int Num_bytes;

	for (Num_bytes = 0; Num_bytes < n && src[Num_bytes] != '\0'; Num_bytes++)
	{
		dest[Numbytes] = src[Num_bytes];
	}
	for (; Num_bytes < n; Num_bytes++)
	{
		dest[Num_bytes] = '\0';
	}
	return (dest);
}
