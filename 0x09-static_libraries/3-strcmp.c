#include "main.h"
/**
* _strcmp - comaprre two strings
* @s1: first string
* @s2: second string
* Return: 0 if equal 1 if not
*/

int _strcmp(char *s1, char *s2)
{
int diff, i;
diff = 0;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] <  s2[i])
{
diff = s1[i] - s2[i];
break;
}
if (s1[i] >  s2[i])
{
diff = s1[i] - s2[i];
break;
}

i++;
}
return (diff);
}
