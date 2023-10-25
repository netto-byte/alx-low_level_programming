#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list
 * @head: A pointer to a listint_t list pointer
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
	*head = NULL;
}
