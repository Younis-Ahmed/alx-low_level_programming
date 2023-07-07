#include "main.h"
/**
* _memcpy - The function copies n bytes from src to dest
* @dest: destination to write
* @src: source to copy
* @n: number of byte
* Return: @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
