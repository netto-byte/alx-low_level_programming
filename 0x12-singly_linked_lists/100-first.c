#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the main function
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore mu house upon my back!\n");
}
