#include "main.h"

/**
 * get_endianness - tests to see if machine is large or little endian
 * Return: 0 for large while 1 for small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
