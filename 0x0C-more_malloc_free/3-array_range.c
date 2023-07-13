#include "main.h"
/**
 * array_range - creates an array of int
 * @min: min
 * @max: max
 * Return: int
 */
int *array_range(int min, int max)
{
	int *Pblock;
	int i, j = 0;

	if (min > max)
		return (NULL);
	Pblock = malloc(sizeof(*Pblock) * ((max - min) + 1));
	if (Pblock != NULL)
	{
		for (i = min; i <= max; i++)
		{
			Pblock[j] = i;
			j++;
		}
		return (Pblock);
	}
	else
		return (NULL);
}
