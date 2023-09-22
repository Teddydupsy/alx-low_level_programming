#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @dest: working this
 * @src: this as well
 * @n: using n number bytes
 * Retrun: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int No_of_bytes;

	for (No_of_bytes = 0; No_of_bytes < n && src[No_of_bytes] != '\0'; No_of_bytes++)
	{
		dest[No_of_bytes] = src[No_of_bytes];
	}
	for (; No_of_bytes < n; No_of_bytes++)
	{
		dest[No_of_bytes] = '\0';
	}
	return (dest);
}
