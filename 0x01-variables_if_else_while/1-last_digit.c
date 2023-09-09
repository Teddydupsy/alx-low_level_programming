#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf("%d is ", n);
    if (n > 5)
    {
        printf("and is greater than 5");
    }
    else if (n == 0)
    {
        printf("and is 0");
    }
    else
    {
        printf("and is less than 6 and not 0");
    }
    printf("\n");
    return (0);
}
