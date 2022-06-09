#include "main.h"

/**
 * _putchar - putchar 0123456789
 * @c: char
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		_putchar('0' + c);
	}
	_putchar('\n');
}
