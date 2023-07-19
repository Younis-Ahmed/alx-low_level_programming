#include "function_pointers.h"
/**
 * int_index - searches of int
 * @array: array to search
 * @size: size of array
 * @cmp: pointer function to int
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]))
			return (i);
	return (-1);
}
