#include "main.h"
/**
 * malloc_checked - function that allocates memory
 * @b: bytes of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{

	void *Pblock;

	Pblock = malloc(b);

	if (Pblock == NULL)
		exit(98);

	return (Pblock);
}
