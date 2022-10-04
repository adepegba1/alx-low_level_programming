#include "main.h"
#include <stdlib.h>

/**
  *_strdup -  a function that returns a pointer to a newly allocated space
  *in memory, which contains a copy of the string given as a parameter.
  *
  *@str: string
  *
  *Return: str
  */
char *_strdup(char *str)
{
	char *a;
	int i, j;

	a = (char *) malloc(sizeof(str) * 2);
	if (str == 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			for (j = 0; j < i; j++)
			{
				a[j] = str[j];
			}
		}
		return (a);
	}
}
