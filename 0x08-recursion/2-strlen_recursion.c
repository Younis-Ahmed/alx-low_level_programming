#include "main.h"
/**
 * _strlen_recursion - find the length of string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		++i;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
