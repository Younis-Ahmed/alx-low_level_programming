#include "main.h"
/**
 * _pow_recursion - returns the value of @x raised to power to @y
 * @x: first param
 * @y: second param
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
