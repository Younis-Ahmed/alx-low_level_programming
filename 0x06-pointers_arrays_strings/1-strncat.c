#include "main.h"

/**
* _strncat - concat two string with limiter to @src
* @dest: string to be appended upon
* @src: string to be completed at end of dest
* @n: limiter
* Return: return new concat string
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, len = 0;

while (dest[i++])
len++;

for (i = 0; src[i] && i < n; i++)
dest[len++] = src[i];

return (dest);
}
