#include <stdio.h>
/**
* main - displays the size of each data type
* Return: return 0
*/
int main(void)
{
printf("Size of a char: %li byte(s)\n", sizeof(char));
printf("Size of an int: %li byte(s)\n", sizeof(int));
printf("Size of a long int: %li byte(s)\n", sizeof(long int));
printf("Size of a long long int: %li byte(s)\n", sizeof(long long));
printf("Size of a float: %li byte(s)\n", sizeof(float));
return (0);
}
