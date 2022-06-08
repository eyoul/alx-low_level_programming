#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, next = 0;
	int sum = 1;

	while (next = a + b)
	{
		a = b;
		b = next;
		if (next % 2 == 1)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
