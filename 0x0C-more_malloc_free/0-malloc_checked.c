#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - Functions that allocates memory using malloc
 * @b: Number of memory size to allocate
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *star;

	star = malloc(b);
	if (star == NULL)
	{
		exit(98);
	}
	return (star);
}
