#include "main.h"

/**
 * create_array - creates and array of chars
 * @size: the size of mem alloc
 * @c: chars to fill bytes
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *alloc;
	unsigned int i;
	if (size <= 0)
		return (NULL);

	alloc = (char *)malloc(size * sizeof(char));
	if (alloc == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		alloc[i] = c;
	}
	return (alloc);

}
