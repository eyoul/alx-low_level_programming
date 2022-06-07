/*
*File: 11-print_to_98.c
*Auth: Eyoul Shimeles
*/

#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n: starting point
 * Return: returns nothing
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			_putchar("%d, ", n);
	}
	else
		for (n = n; n > 98; n--)
			 _putchar("%d, ", n);
	 _putchar("98\n");
}
