#include <unistd.h>

/**
 * _putchar - writes a chracter to the stdout
 * @c: Character to print
 *
 * Return: 1 on success,
 * or return 0, and set errno appropraitely.
 */
 int _putchar(char c)
{
	return (write(1, &c, 1));
}
