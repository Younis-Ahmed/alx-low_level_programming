#include <stdio.h>
/**
* main - entry point
* @argc: - count
* @argv: - array
* Return: 0
*/
int main(int argc, char *argv[])
{
(void)argc;
while (*argv)
{
printf("%s\n", *argv);
++argv;
}

return (0);
}
