#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0 if no errors, else
 */
int main(int argc, char *argv[])
{
	int k = 0, i, j;

	for (i = 0; i < argc; ++i)
	{
		for (j = 0; argv[i][j]; ++j)
		{
			if (isdigit(argv[i][j]) == 0)
				{
					puts("Error");
					return (1);
				}
		}
	}

	for (i = 0; i < argc; ++i)
	{
		k += atoi(argv[i]);
	}
	printf("%d\n", k);
	return (0);
}
