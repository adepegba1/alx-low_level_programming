#include "main.h"

/**
 * print_square - printing square
 * @size: number of size
 * Return: 0
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= (size - 1); j++)
		{
				_putchar('#');
		}
		_putchar('\n');
	}
	if ( size == 0)
		_putchar('\n');
}
