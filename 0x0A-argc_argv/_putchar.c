#include "main.h"
#include <unistd.h>
/**
 * _putchar - Write '_putchar' to stdout
 * Description: It is used to print
 * @c: charater to test
 * Return: 1
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
