#include "main.h"

/**
 * main -  prints the alphabet, in lowercase
 *
 * Return: Always return 0.
 */
void print_alphabet(void)
{
	char r;

	for(r = 'a'; r <= 'z'; r++ );
	{
		_putchar(r);
	}
	_putchar('\n');
}
