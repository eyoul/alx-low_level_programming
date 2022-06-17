#include "main.h"

/**
 * print_buffer - print a buffer
 * @b: char
 * @size: int
 * Return:void
 */
void print_buffer(char *b, int size)
{
	int x, i;

	for (a = 0; a < size; a += 10)
	{
		printf("%08x: ", a);

		for (i = 0; i < 10; i++)
		{
			if ((i + a) >= size)
				printf(" ");
			else
				printf("%02x", *(b + i + a));
			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}
		for (i = 0; i < 10; i++)
		{
			if ((i + a) >= size)
				break;
			else if (*(b + i + a) >= 31 && *(b + i + a) <= 126)
				printf("%c", *(b + i + a));
			else
				printf(".");
		}

		if (a >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
