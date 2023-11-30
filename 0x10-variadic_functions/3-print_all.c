#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list agr_ptr;
	int i = 0;
	char *str, *seperator = "";

	va_start(arg_ptr, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(arg_ptr, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(arg_ptr, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(arg_ptr, double));
					break;
				case 's':
					str = va_arg(arg_ptr, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", seperator, str);
					break;
				default:
					i++;
					continue;
			}
			i++;
			seperator = ", ";
		}
	}
	printf("\n");
	va_end(arg_ptr);
}
