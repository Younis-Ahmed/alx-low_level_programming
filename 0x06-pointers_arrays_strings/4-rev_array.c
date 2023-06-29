#include "main.h"
/**
* reverse_array - reverse array
* @a: array to reverse
* @n: n of array
* Return: void
*/
void reverse_array(int *a, int n)
{
int i,  mid, temp;
temp = 0;
mid = n / 2;

for (i = 0; i < mid; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
