#include "main.h"
/**
 * reverse_array - Function that reverse the content of an array on integers
 * @a: the array variable
 * @n: number of elements of the array
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int place, index;

	n = n - 1;
	index = 0;
	while (index <= n)
	{
		place = a[index];
		a[index] = a[n];
		a[n--] = place;
	}
}
