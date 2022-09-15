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
			if (size > 0)
			{
				_putchar('#');
			}
			else
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
