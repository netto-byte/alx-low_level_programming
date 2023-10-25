#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 * of a listint_t linked list.
 * @heada: A listint_t list.
 *
 * Return: Sum of all (n) values of a listint_t.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
