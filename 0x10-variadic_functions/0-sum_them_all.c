#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the its parameters
 * @n: Number of parameters to be passed to the function
 *
 * Return: Sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_ptr;
	size_t sum = 0, i;

	va_start(arg_ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_ptr, int);
	}
	return (sum);
}
