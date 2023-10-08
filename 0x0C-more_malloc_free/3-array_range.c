#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: start value
 * @max: size of array
 *
 * Return: pointer to array of integers.
 */
int *array_range(int min, int max)
{
	int dif, i, *arr;

	if (min > max)
		return (NULL);

	dif = max - min + 1;

	arr = malloc(sizeof(int) * dif);
	if (!arr)
		return (NULL);

	for (i = 0; i <= dif; i++)
		arr[i] = min++;
	return (arr);
}
