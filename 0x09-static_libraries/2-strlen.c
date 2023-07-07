#include "main.h"
/**
* _strlen - length of a string
* @s: string to count elements
* Return: length of string
*/
int _strlen(char *s)
{
int count, i;
count = 0;
for (i = 0; *(s + i) != '\0'; i++)
{
++count;
}
return (count);
}
