#include "main.h"

/**
 * clear_bit - establishes a bit value to 0
 * @n: pointer to desired number
 * @index: bit to clear index
 *
 * Return: 1 indicates success, -1 indicates failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
