#include "main.h"

/**
 * _strdup - pointer to a newly allocated
 *  space in memory, with a copy of string
 * @str: string to copy
 *Return: pointer
 */
char *_strdup(char *str)
{
	char *sub;
	int i = 0, len;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		++len;
		++i;
	}

	sub = (char *)malloc(len + 1 * sizeof(char));

	if (sub == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		sub[i] = str[i];
	}
	sub[len] = '\0';
	return (sub);
}
