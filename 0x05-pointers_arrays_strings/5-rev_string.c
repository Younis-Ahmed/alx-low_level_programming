#include "main.h"
/**
 * rev_string - reverse a string
 * @s: first param
 * Return: void
 */
void rev_string(char *s)
{
	int length, mid, i;
	char temp;

	length = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		++length;
	}
	mid = length / 2;

	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

}
