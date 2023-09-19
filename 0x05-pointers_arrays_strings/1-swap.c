#include "main.h"
/**
 * swap_int - Swapping the values of two integers
 * @a: variable needing swapping
 * @b: second variable
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
