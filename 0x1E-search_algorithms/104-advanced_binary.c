#include "search_algos.h"

/**
 * rec_search - the Binary search algorithm is used
 * to look for a value in an array of integers.
 *
 *
 * @array: array of input
 * @size: magnitude of the array
 * @value: value to search in
 * Return: index for the number
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Search to look for value in sorted array of numbers.
 * @array: Pointer to array first element that needs to be searched in.
 * @size: Count of the array elements.
 * @value: Value to look for.
 *
 * Return: Index Not present or array is NULL, return -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
