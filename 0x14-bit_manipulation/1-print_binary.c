#include "main.h"
/**
* print_binary - prints base 2 represention of num
* @n: number
*/
void print_binary(unsigned long int n)
{
        if (n && n >> 1)/* until n == 00000000 */
                print_binary(n >> 1);
        _putchar((n & 1) + '0');
}
