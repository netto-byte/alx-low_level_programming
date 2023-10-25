#include "lists.h"
#include <stdlib.h>

/**
 * Deletes the head node of a listint_t linked list, and return the
 * head node's data(n).
 * @head: A listint_t list.
 *
 * Return: the head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	p = *head;
	if (p == NULL)
		return (0);

	*head = (*head)->next;
	free(p);
	n = (*head)->n;

	return (n);
}
