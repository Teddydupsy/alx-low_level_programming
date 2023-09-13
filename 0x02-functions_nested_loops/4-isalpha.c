#include "main.h"
/**
 * _isalpha - Checking for alphabetic character
 * @c: is the letter to be checked
 * The letter can be upper or lowercase
 * Return: 1 if c is a letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
