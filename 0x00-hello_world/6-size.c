#include <stdio.h>

/**
 * main - Entry point
 * Description: printing the size of byte on each computer
 * Return: 0
 */
int main(void)
{	int i;
	char c;
	float f;
	double d;

	printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
