#include "variadic_functions.h"

/**
 * sum_them_all - sum of all params
 * @n: count of all params
 * Return: the sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list nPtr;
	sum = 0;
	if (n == 0)
		return (0);
	va_start(nPtr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nPtr, int);



	va_end(nPtr);

	return (sum);
}
