#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to string
 * @f: function pointer to char/string
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
