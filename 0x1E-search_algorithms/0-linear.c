#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers using
 * the Linear Search Algorithm.
 * @array: Pointer to the first element of the array to sought value from.
 * @size: The number of elements in <array>.
 * @value: The value to sought for.
 *
 * Return: The first index where <value> is located, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL && size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
