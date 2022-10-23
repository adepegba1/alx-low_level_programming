#include <stdio.h>
/**
 * main - Entry point
 * Description: number follow by comma
 * Return: 0
 */
/*
int main(void)
{	int ch;
	for (ch = '0'; ch <= '9'; ch++)
	{ putchar(ch);
	if (ch != '9')
	{ putchar(',');
	 putchar(' '); }}
	putchar('\n');
	return (0);
}
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
