#include "search_algos.h"

/**
 * linear_search - looks for a value using linear search.
 * @array: Pointer to array that needs to be searched.
 * @size: The array element count.
 * @value: Value to look for.
 *
 * Return: If value cannot be found -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
