#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * @cap: Pointer
 * Return: Pointer
 */
char *cap_string(char *cap)
{
	int letter = 0;

	while (cap[letter] != '\0')
	{
		if (cap[0] >= 97 && cap[letter] <= 122)
		{
			cap[0] = cap[0] - 32;
		}
		if (cap[letter] == ' ' || cap[letter] == '^' || cap[letter] == '\n'
			|| cap[letter] == ',' || cap[letter] == ';' || cap[letter] == '.'
			|| cap[letter] == '!' || cap[letter] == '?' || cap[letter] == '"'
			|| cap[letter] == '(' || cap[letter] == ')' || cap[letter] == '{'
			|| cap[letter] == '}')
		{
			if (cap[letter + 1] >= 97 && cap[letter + 1] <= 122)
			{
				cap[letter + 1] = cap[letter + 1] - 32;
			}
		}
		letter++;
	}
	return (cap);
}
