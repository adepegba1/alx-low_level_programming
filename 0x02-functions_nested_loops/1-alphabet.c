#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: alphabet function
 * Return: void
 */

void print_alphabet(void)
{	char b;
	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
}
