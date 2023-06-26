#include "main.h"
/**
 * puts2 - even string
 * @str: first param
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		i % 2 == 0 ? _putchar(str[i]) : i;
	}
	_putchar('\n');
}
