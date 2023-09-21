#include "main.h"
/**
 * _strncat - Concatenating two strings
 * @dest: the string in test
 * @src: other string in testing
 * @n: bytes in considerationg
 * Return: Pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_1, length_2;

	length_1 = 0;
	while (dest[length_1] != '\0')
	{
		length_1++;
	}
	for (length_2 = 0; length_2 < n && src[length_2] != '\0'; length_2++, length_1++)
	{
		dest[length_1] = src[length_2];
	}
	dest[length_1] = '\0';
	return (dest);
}
