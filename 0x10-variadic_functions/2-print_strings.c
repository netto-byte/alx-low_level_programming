#include "variadic_functions.h"

/**
 * print_string - Prints strings, followed by a new line
 * @seperator: String to print between words.
 * @n: Number of parameters to be passed.
 *
 * Return: void.
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list arg_ptr;
	size_t i;
	char *str;

	va_start(arg_ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_ptr, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (seperator && i != n - 1)
			printf("%s", seperator);
	}
	va_end(arg_ptr);
	printf("\n");
}
