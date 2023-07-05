#include "main.h"
/**
 * _puts_recursion - prints a string using recursion
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	++s;
	_puts_recursion(s);
}
