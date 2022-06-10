#include <stdio.h>

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
	int n;

	for (n = 1; n <= 100; n++)
	{
	if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%i", n);

		if (n < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
