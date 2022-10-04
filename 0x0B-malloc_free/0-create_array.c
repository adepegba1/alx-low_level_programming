#include "main.h"
#include <stdlib.h>

/**
  *create_array - a function that creates an array of chars
  *and initializes it with a specific char.
  *
  *@size: length of string
  *
  *@c: specific char to change
  */

char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size == 0)
	{
		return ("NULL");
	}

	a = malloc (sizeof(int) * size);

	if ( a == NULL)
	{
		return ("NULL");
	}
	else 
	{
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
		return (a);
	}
	
}
