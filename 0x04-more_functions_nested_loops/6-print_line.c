#include "main.h"

/**
 * print_line - print a line
 * @n: number of interger
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = '1'; i <= n; i++)
	{
		if (n > '0')
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
}
