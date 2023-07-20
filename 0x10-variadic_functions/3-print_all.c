#include "variadic_functions.h"
/**
 * print_all - prints all types
 * @format: immutable pointer to immutable string
 */
void print_all(const char * const format, ...)
{
	int i;
	int isComma;
	char *str;
	va_list formatPtr;
	va_start(formatPtr, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(formatPtr, int));
				isComma = 1;
				break;
			case 'i':
				printf("%i", va_arg(formatPtr, int));
				isComma = 1;
				break;
			case 'f':
				printf("%f", va_arg(formatPtr, double));
				isComma = 1;
				break;
			case 's':
				str = va_arg(formatPtr, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				isComma = 1;
				break;
			default:
				isComma = 0;
				break;
		}
		if (format[i + 1] != '\0' && isComma == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(formatPtr);
}
