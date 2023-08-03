#include "lists.h"

/**
 * add_nodeint - adds new node to the linked list starting point.
 * @head: reference to the list root node
 * @n: information to add to new node
 *
 * Return: new node reference or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
