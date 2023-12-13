#include "search_algos.h"

/**
  * _binary_search - Uses binary search to look for a value
  *                  in a sorted array of integers.
  * @array: A pointer to the arrays that needs to be found.
  * @left: The index of [sub]array to search from the beginning.
  * @right: The [sub]array terminating index to search.
  * @value: Value to look for.
  *
  * Return: If the array is NULL or the value is absent, the
  *         index corresponding to the value.
  *
  * Description: Every modification, prints [sub]array for search.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - search to find a value in a sorted array of integers.
 * @array: Pointer to first item in the array that needs to be searched in.
 * @size: The arrays element count.
 * @value: Value to look for.
 *
 * Return: If found at first index. -1 if the array is NULL or not present.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
