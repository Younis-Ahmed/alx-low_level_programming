#include <stdio.h>
#include <stdlib.h>
/**
* main - Function that will print the alphabet using putchar
*Return: 0 SUCCES
*/
int main(void)
{
int i, j;
/* a-z */
for (i = 97; i <= 122; i++)
putchar(i);
/* A-Z */
for (j = 65; j <= 90; j++)
putchar(j);
putchar('\n');
return (0);
}
