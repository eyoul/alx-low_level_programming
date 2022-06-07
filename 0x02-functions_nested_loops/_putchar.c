#include <unistd.h>

/**
 *_putchar -writes the chararcter c to stdout
 *@c: The character to print
 *
 *return: On success 1.
 *on error, -1 is returned, and errno is set appropriatel.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
