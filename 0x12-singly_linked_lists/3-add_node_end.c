#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: A pointer to a list_t list pointer
 * @str: Data to creat new node
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *i;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	else
	{
		i = *head;
		while (i->next)
			i = i->next;
		i->next = tmp;
	}
	return (tmp);
}
