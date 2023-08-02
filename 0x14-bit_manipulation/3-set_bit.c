#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at given index
 * @n: num to modify
 * @index: index of which to turn bit on
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
