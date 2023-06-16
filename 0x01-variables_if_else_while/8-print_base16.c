#include <stdio.h>
/**
* main - Entry point
* Return: 0
*/
int main(void)
{
int hexNum;
for (hexNum = 48; hexNum <= 57; hexNum++)
putchar(hexNum);
for (hexNum = 97; hexNum <= 102; hexNum++)
putchar(hexNum);
putchar('\n');
return (0);
}
