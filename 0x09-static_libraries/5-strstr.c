#include "main.h"
/**
 * _strstr - Function that locates a substring
 * @haystack: string to search
 * @needle: substring to locate
 * Return: pointer to the beginning of the located substring
 * NULL - if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int place;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		place = 0;
		if (haystack[place] == needle[place])
		{
			do {
				if (needle[place + 1] == '\0')
					return (haystack);
				place++;
			} while (haystack[place] == needle[place]);
		}
		haystack++;
	}
	return ('\0');
}
