#include "main.h"
/**
 * _calloc - allocates memory and intialize bytes to 0
 * @nmemb: number of elements
 * @size: size of memory
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *Pblock;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	Pblock = malloc(nmemb * size);
	if (Pblock != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			Pblock[i] = 0;
		return (Pblock);
	}
	else
		return (NULL);
}
