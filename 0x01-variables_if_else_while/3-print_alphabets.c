#include <stdio.h>
/**
  *main - Entry point
  *Description: all alphabet both upper and lowercase
  *Return: 0
  */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	i = 65;

	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
