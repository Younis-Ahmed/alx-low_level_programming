#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: String to append
 * @src: string to concat to dest
 *
 * Return: dest with src appended to it
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
