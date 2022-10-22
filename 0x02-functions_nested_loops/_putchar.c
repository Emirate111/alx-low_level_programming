#include "main.h"
#include <unistd.h>

/**
 * _putcahr - write the character c to stdout
 * @c: thr character to print
 *
 * Return:On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
