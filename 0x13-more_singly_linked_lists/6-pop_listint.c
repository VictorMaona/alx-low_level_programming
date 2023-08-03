#include "lists.h"

/**
 * pop_listint - deletes the linked list head node.
 * @head: pointer to linked list top-level element
 *
 * Return: the removed data included within the elements
 * or 0 if the list is not present.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
