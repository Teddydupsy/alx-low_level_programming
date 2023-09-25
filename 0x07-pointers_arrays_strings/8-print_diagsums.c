#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * @a: matrix integer
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int value, sum_1, sum_2;

	sum_1 = 0, sum_2 = 0;
	value = 0;
	while (value < size)
	{
		sum_1 += a[value];
		a += size;
		value++;
	}
	a -= size;
	for (value = 0; value < size; value++)
	{
		sum_2 += a[value];
		a -= size;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
