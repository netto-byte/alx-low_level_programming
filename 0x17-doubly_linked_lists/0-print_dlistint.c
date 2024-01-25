#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: a dlistint_t doubly linked list.
 *
 * Return: The number of nodes in h.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *i = h;
	size_t count = 0;

	while (i)
	{
		printf("%d\n", i->n);
		i = i->next;
		count += 1;

	}

	return (count);
}
