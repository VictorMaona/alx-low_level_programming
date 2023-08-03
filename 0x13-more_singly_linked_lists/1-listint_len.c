#include "lists.h"

/**
 * listint_len - yield the size of a linked list elements.
 * @h: traversal of a linked list of kind listint_t
 *
 * Return: number nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
