#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of bytes to allocate
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
