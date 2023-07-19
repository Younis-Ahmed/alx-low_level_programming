#include "function_pointers.h"
/**
 * array_iterator - exe a function given a param on each element of array
 * @array: array to iterate
 * @size: size of array
 * @action: function pointer array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);

}
