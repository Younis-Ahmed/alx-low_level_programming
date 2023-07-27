#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * younis - Prints a string before the main
 */
void younis(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
