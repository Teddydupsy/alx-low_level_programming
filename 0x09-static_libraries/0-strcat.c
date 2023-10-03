#include "main.h"
/**
 * _strcat - Concatenate two strings
 * @dest: working with this string
 * @src: working with this string
 * Return: Pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int length_1, length_2;

	length_1 = 0;

	while (dest[length_1] != '\0')
	{
		length_1++;
	}
	for (length_2 = 0; src[length_2] != '\0'; length_2++, length_1++)
	{
		dest[length_1] = src[length_2];
	}
	dest[length_1] = '\0';
	return (dest);
}
