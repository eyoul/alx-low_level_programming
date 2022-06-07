/*
*File: alphabet ten times
*Auth: Eyoul Shimeles
*/

#include "main.h"

/**
 *  Write a function that print alphabet x10
*/

void print_alphabet_x10(void)
{
	int coun = 0;
	char alpha;

	while (coun++ <= 9)
	{
		for (alpha = 97; alpha <= 122; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
