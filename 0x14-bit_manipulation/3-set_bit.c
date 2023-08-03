#include "main.h"

/**
 * set_bit - specified index sets bit to 1
 * @n: pointer indicating the new number
 * @index: set the bit index to 1
 *
 * Return: 1 indicates success, -1 indicates failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
