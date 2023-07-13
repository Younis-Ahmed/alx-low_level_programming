#include "main.h"
/**
 * string_nconcat - concat two string til n bytes
 * @s1: first string
 * @s2: secong string
 * @n: number of byres to write from s2
 * Return: pointer char to newly allocated mem space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, i, j;
	char *Pblock;

	size = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i); i++)
		size++;


	Pblock = malloc((size + 1) * sizeof(char));

	if (Pblock == NULL)
		return (NULL);


	for (i = 0; s1[i]; i++)
		Pblock[i] = s1[i];


	for (j = 0; j < n && s2[j]; j++)
		Pblock[j + i] = s2[j];

	Pblock[j + i] = '\0';

	return (Pblock);
}
