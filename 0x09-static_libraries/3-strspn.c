#include "main.h"
/**
* _strspn - search string for matched bytes
* @s: string to search
*@accept: bytes to search with
* Return: int
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, res;
res = 0;
for (i = 0; *(s + i); i++)
{
for (j = 0; *(accept + j); j++)
{
if (*(s + i) == *(accept + j))
{
++res;
break;
}
else if (*(accept + (j + 1)) == '\0')
return (res);
}
}
return (res);
}
