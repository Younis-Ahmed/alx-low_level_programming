#include "main.h"
/**
* _strstr - find the substring on main string
* @haystack: string to be searched
* @needle: substring to use for match
* Return: pointer to first occurrences
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0;

while (*(haystack + i))
{
while (*(needle + j) && (*(haystack + i) == *needle))
{
if (haystack[i + j] == *(needle + j))
j++;
else
break;
}
if (*(needle + j))
{
i++;
}
else
return (haystack + i);
}
return (0);
}
