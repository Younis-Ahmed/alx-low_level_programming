#include "main.h"
/**
* _isalpha - checks if param is alphabet
*@c: first param
*
* Description: checks if arg is alphabet
* Return: 0 if false and 1 if true
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
