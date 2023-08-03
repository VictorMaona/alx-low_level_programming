#include "lists.h"

/**
 * reverse_listint - turns a linked list around.
 * @head: the list's root node pointer
 *
 * Return: identifier for the top level node of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
