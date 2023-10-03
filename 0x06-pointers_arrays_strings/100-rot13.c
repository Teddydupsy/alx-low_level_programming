#include "main.h"
/**
 * rot13 - Function that encodes a string usung rot13
 * @dat: pointer to string
 * Return: pointer
 */
char *rot13(char *dat)
{
	int bat, cat;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	bat = 0;
	while (dat[bat] != '\0')
	{
		cat = 0;
		while (cat < 52)
		{
			if (dat[bat] == alpha[cat])
			{
				dat[bat] = aplha2[cat]
					break;
			}
		}
		cat++;
	}
	bat++;
	return (dat);
}
