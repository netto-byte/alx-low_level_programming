#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of bytes to allocate
 * @size: size of bytes to allocate
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	void *mem;
	size_t i, len;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	mem = malloc(len);
	if (!mem)
		return (NULL);

	arr = mem;
	for (i = 0; i < len; i++)
		arr[i] = '\0';
	mem = arr;
	return (arr);
}
