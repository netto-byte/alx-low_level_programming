#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: A listint_t list
 * @index: The index of the node to return
 *
 * Return: nth index of a listint_t.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; (i < index) && (head->next); i++)
		head = head->next;

	if (i < index)
		return (NULL);
	return (head);
}
