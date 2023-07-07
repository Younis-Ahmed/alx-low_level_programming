#include "main.h"
/**
* _strchr - returns first occurrence of char @c in string @s else NULL
* @s: string to parse
* @c: char to compare
* Return: pointer or NULL
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
{
return (s + i);
}
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
