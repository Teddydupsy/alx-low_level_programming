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
        int len_1, len_2;

        len_1 = 0;
        while (dest[len_1] != '\0')
        {
                len_1++;
        }
        for (len_2 = 0; len_2 < n && src[len_2] != '\0'; len_2++, len_1++)
        {
                dest[len_1] = src[len_2];
        }
        dest[len_1] = '\0';
        return (dest);
}
