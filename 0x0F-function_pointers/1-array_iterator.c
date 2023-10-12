#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Function that executes a function
 * given as a parameter on each element of an array.
 * @array: Array
 * @size: is the size of the array
 * @action: Pointer to the function to be used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int abs;

	if (array == NULL || action == NULL)
		return;
	abs = 0;
	while (abs < size)
	{
		action(array[abs]);
		abs++;
	}
}
