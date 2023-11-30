#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers passed as parameters,
 * followed by a new line
 * @n: Number of parametes to be passed.
 *
 * Return: void.
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list arg_ptr;
	size_t i;

	va_start(arg_ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_ptr, int));
		if (seperator && i < n - 1)
			printf("%s", seperator);
	}
	va_end(arg_ptr);
	printf("\n");
}
