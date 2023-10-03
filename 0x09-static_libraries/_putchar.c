#include "main.h"
#include <unistd.h>
/**
 * _putchar - Write '_putchar' to stdout
 * Description: It is used to print
 * @c: character to print
 * Return: 1
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
