#include <stdio.h>
#include <stdlib.h>
/**
* main - Function that will print the alphabet using putchar
*Return: 0 SUCCES
*/
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
