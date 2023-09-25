#include "main.h"
/**
 * print_chessboard - Function that prints the chessboard
 * @a: is the pointer to pieces to print
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x_axis, y_axis;

	x_axis = 0;
	while (x_axis < 8)
	{
		for (y_axis = 0; y_axis < 8; y_axis++)
		{
			_putchar(a[x_axis][y_axis]);
		}
		x_axis++;
		_putchar ('\n');
	}
}
