/**
 * File: 1-alphabet.c
 *
 * Auth: Eyoul Shimeles
 */

#include "main.h"

/**
 * main -  prints the alphabet, in lowercase
 *
 * Return: Always return 0.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; alpha++)
		_putchar(alpha);
		
	_putchar('\n');
}
