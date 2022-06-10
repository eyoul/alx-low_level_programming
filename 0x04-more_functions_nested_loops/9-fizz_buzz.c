#include <stdio.h>
#include "main.h"

/**
 * main - FizzBuzz
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, buzz for multiples of 5,
 * and FizzBuzz for multiiples of both
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
			if else(i % 3 == 0)
				printf("Fizz");
			if else(i % 5 == 0)
				printf("Buzz");
			else
				printf("%i", i);
			if (i < 100)
				printf(" ");
			printf("\n");
	}
	return (0);

}
