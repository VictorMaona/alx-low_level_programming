#include "lists.h"

/**
 * get_dnodeint_at_index - counts nodes iterating through linked list.
 * @index: the node search index, starting at 0.
 * @head: pointer of the list.
 *
 * Return: NULL or 0
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
