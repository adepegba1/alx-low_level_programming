#include "main.h"

/**
*rev_string - reserve string
*@s: character enterd
*Return: nothing
*/
void rev_string(char *s)
{

int n = str.length();

for (int i = 0; i < n / 2; i++)
swap(str[i], str[n - i - 1]);

}
