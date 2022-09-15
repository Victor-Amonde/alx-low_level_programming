#include "main.h"

/**
 * print_squre - draws a square using multiple terminal lines and #'s
 * @size: size of square
 * if size is 0 or less the function should print newline
 * Return: Nothing
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
