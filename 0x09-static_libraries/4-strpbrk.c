#include "main.h"
/**
* _strpbrk - return first byte from @s onwards
* @s: string to parse
* @accept: string to match from
* Return: pointer from first match
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; *(s + i); i++)
{
for (j = 0; *(accept + j); j++)
{
if (*(s + i) == *(accept + j))
{
return (s + i);
}
}
}
return (NULL);
}
