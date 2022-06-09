#include "main.h"

/**
 * _putchar - putchar 0123456789
 * @c: char
 *
 * Return: void
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}
