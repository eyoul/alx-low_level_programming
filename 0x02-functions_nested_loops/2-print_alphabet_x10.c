/*
*File: 2-print_alphabet_x10.c
*Auth: Eyoul Shimeles
*/

#include "main.h"

/**
 * Write a function that prints 10 times the alphabet, in lowercase, followed by a new line
*/
void print_alphabet_x10(void)
{
	int coun = 0;
	char alpha;

	while(coun++ <= 9)
	{
		for (alpha = 97; alpha <= 122; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
