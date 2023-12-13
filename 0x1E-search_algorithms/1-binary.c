#include "search_algos.h"

/**
 * binary_search - look for a value in a sorted array of numbers.
 * @array: binary search to look for value in sorted array of numbers.
 * @size: Count of the array elements.
 * @value: Value to look for.
 *
 * Return: The index where the value is located. If not present or array is NULL, return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
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
