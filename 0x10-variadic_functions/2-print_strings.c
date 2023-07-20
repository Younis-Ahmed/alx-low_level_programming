#include "variadic_functions.h"

/**
 * print_strings - prints strings, follow by new line
 * @separator: string to printed between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list strPtr;

	va_start(strPtr, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(strPtr, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strPtr);
}

