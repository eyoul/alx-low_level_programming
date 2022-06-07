#include "main.h"

/**
 * main -  prints the alphabet, in lowercase
 *
 * Return: Always return 0.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++ );
		_putchar(alpha);
		
	_putchar('\n');
}
