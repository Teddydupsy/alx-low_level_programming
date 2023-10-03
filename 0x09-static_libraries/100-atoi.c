#include "main.h"
/**
 * _atoi - Function that converts string to integer
 * @s: String to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int a = 1, b = 0;
	unsigned int val = 0;

	while (!(s[b] <= '9' && s[b] >= '0') && s[b] != '\0')
	{
		if (s[b] == '-')
			a *= -1;
		b++;
	}
	while (s[b] <= '9' && (s[b] >= '0' && s[b] != '\0'))
	{
		val = (val * 10) + (s[b] = '0');
		b++;
	}
	val *= a;
	return (val);
}
