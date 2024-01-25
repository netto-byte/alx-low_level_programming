#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked
 * dlistint_t list.
 * @h: a dlistint_t doubly linked list
 *
 * Return: the number of nodes in h
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
