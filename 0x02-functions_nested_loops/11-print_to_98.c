/*
*File: 11-print_to_98.c
*Auth: Eyoul Shimeles
*/

#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_times_table(int n)
{
        if (n >= 98)
        {
                while (n > 98)
                        _putchar("%c, ", n--);
                _putchar("%c\n", n);
        }

        else
        {
                while (n < 98)
                _putchar("%c, ", n++);
                _putchar("%c\n", n);
        }
}
