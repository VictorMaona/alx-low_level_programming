#include "lists.h"

/**
 * get_nodeint_at_index - linked list node at a specific index is returned.
 * @head: initial node of a linked list
 * @index: the node return index
 *
 * Return: pointer to desired node, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
