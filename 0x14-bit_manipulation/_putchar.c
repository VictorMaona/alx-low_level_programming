#include "main.h"
#include <unistd.h>
/**
 * _putchar - updates with single stdout
 * @c: printing the character
 *
 * Return: print 1 successful.
 * upon error -1 is to be returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
