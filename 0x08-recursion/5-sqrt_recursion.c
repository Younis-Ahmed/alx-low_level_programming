#include "main.h"
/**
 * _sqrt - square number
 * @n: first param
 * @i: second param
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
	{
		return (-1);
	}
	else if (square == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

/**
 *_sqrt_recursion - natural sqrt of num
 * @n: num
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
