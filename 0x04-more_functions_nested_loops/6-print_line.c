#include "main.h"

/**
 * print_line - print a line
 * @n: number of interger
 * Return: 0
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && i > 0)
	{
		_putchar('_');
		i++;
	}
		_putchar('\n');
}
