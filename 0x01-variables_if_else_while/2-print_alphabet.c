#include <stdio.h>
/**
  * main - entry point
  *
  *Description: alphabet from a to z
  *Return: 0
  */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
