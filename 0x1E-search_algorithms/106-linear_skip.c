#include "search_algos.h"

/**
 * linear_skip - looks for a value in an integer skip list that has been sorted.
 * @list: Pointer to the searchable portion of the skip list at the top.
 * @value: Value to look for.
 *
 * Return: Return NULL if the list is empty or not existent.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *go;

	if (list == NULL)
		return (NULL);

	go = list;

	do {
		list = go;
		go = go->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)go->index, go->n);
	} while (go->express && go->n < value);

	if (go->express == NULL)
	{
		list = go;
		while (go->next)
			go = go->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)go->index);

	while (list != go->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
