#include "main.h"

/**
 * swap_int - swap to values
 * @a: first param
 * @b: second param
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
