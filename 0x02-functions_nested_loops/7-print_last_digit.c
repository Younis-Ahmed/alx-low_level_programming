#include "main.h"
/**
 * print_last_digit - return last digit
 * @n: num
 *
 * Description: return last num
 * Return: last digits
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = n % 10;
		_putchar(r + '0');
		return (r);
	}
}
