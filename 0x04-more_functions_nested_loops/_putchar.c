#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: the character to print
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
