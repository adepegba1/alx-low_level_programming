#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++);
	return (len);
}
