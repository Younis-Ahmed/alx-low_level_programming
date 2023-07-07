#include "main.h"
/**
* _memset - fills memory with a constant bytes.
* @s: pointer to address string
* @b: bytes to overwrite previous elements
* @n: Number of bytes to be filled starting from ptr to be filled
* Return: char *
*/
char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
*(s + (n - 1)) = b;
n--;
}
return (s);
}
