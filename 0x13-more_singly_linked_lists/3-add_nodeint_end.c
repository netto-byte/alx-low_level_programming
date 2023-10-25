#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer to a listint_t list pointer
 * @n: Data for a new node creation
 *
 * Return: The address of the nwq element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *p;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;

	if (*head == NULL)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}

	p = *head;
	while (p->next)
		p = p->next;
	p->next = tmp;
	
	return (tmp);
}
