#include "main.h"

/**
* get_bit - returns the value of a bit at given index
* @n: number
*@index: index of which value of bit returns
* Return: int
*/

int get_bit(unsigned long int n, unsigned int index)
{
        if (index > 63 || !n || !n >> 1)
                return (-1);

        return ((n >> index) & 1);
}

