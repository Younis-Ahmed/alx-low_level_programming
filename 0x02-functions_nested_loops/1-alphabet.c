#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase followed by new line
 * Return: void
 */
void print_alphabet(void)
{
	int i = 0;
	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
