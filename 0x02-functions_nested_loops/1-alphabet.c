#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: alphabet function
 * Return: void
 */
void print_alphabet(void)
{	int b;
	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
}
int main(void)
{	print_alphabet();
	putchar('\n');
 	return (0);
}
