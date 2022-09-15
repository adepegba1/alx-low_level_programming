#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: interger enter
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	for (n = '1'; n > 0; n++)
	{
		if (n > 0)
		{
			_putchar('\');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
	return (0);
}
