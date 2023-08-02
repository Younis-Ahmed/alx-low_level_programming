#include "main.h"

/**
 * clear_bit - turn off bit
 *@n: num
 *@index: index to set bit
 *Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{


	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
