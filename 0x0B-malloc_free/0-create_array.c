#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and
 * initializes it with a specific char.
 * @size: Size of the array
 * @c: Character to fill
 * Return: Pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
