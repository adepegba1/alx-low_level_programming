#include "main.h"

/**
 * print_line - print a line
 * @n: number of interger
 * Return: 0
 */
void print_line(int n)
{
	int a;

	while (a > 0 && a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
