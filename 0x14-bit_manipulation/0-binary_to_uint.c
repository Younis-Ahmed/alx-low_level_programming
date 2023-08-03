#include "main.h"
/**
 * len - string len
 * @s: string to count
 * Return: count
 */
int len(const char *s)
{
	int count = 0, i = 0;

	while (s[i])
	{
		count++;
		i++;
	}
	return (count);
}
/**
 * binary_to_uint - converts a binary number to uint
 * @b: bin num
 *Return: uint
 */

unsigned int binary_to_uint(const char *b)
{
	int max_idx = 0, multi = 1;
	unsigned int res = 0;

	if (!b)
		return (0);

	max_idx = len(b) - 1;

	while (max_idx >= 0)
	{
		if (b[max_idx] != '0' && b[max_idx] != '1')
			return (0);

		res += multi * (b[max_idx] - '0');
		multi <<= 1;
		max_idx--;
	}
	return (res);
}

