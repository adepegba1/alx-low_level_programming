#include <stdio.h>
/**
 * main - Entry point
 * Description: base 16 number
 * Return: 0
 */
int main(void)
{	int num;
	char ch;

	for (num = 0; num <= 9; num++)
	{ putchar((num % 10) + '0'); }
	for (ch = 'a'; ch <= 'f'; ch++)
	{ putchar(ch); }
	putchar('\n');
	return (0);
}


/**
 * main - Entry point
 * Description: base 16 number
 * Return: 0
 
#include <stdio.h>

int main() {
   int i;
   int a = 65;
   
   for(i = 0; i < 16; i++)
   {
        if (i > 9)
       {
           putchar(a);
           a++;
       }
      else
      putchar((i % 10) + '0');
   }
 putchar(10);
    return 0;
}
*/
