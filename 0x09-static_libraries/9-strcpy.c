#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Function that copies string pinted to by source
 * @dest: Destination
 * @src: Source
 * Return: Pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int num = 0;

	while (num >= 0)
	{
		*(dest + num) = *(src + num);
		if (*(src + num) == '\0')
			break;
		num++;
	}
	return (dest);
}
