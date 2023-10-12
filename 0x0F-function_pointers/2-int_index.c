#include "function_pointers.h"
/**
 * int_index - Returns the index if comparison is tru, else -1
 * @array: Array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function used to compare
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int bra;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (bra = 0; bra < size; bra++)
	{
		if (cmp(array[bra]))
			return (bra);
	}
	return (-1);
}
