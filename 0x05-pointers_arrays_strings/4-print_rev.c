#include "main.h"
/**
 * print_rev - string in reverse
 * @s: string to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int count, i;

	count = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		++count;
	}


	for (i = count - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
