#include "main.h"
#include <stdio.h>
/**
 * main - the entry point
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)

		printf("%s\n", argv[i]);

		return (0);
}
