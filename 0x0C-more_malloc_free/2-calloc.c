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
	size_t i, len;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * (size + 1);
	arr = malloc(len);
	if (!arr)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = '\0';
	return (arr);
}
