#include "main.h"
/**
 *print_sign - checks for n range
 * @n: number
 *
 *Description: This is a function to check n range
 * Return: 1 if n > 0 // 0 if n ==0 // -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
