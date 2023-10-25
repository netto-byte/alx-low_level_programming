#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds anew node at the beginning of a listint_t list
 * @head: Pointer to a listint_t list pointer
 * @n: Data for new node
 *
 * Return: Address of thw new element, or NULL if is fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;

	*head = tmp;
	return (tmp);
}
