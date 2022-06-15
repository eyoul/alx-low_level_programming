#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src);
{
	int dle = 0, y;

	while (dest[dle])
	{
		dle++;
	}
	for (y = 0; src[y] != 0; y++)
	{
		dest[dle] = src[y];
		dle++;
	}
	dest[dle] = '\0';
	return (dest);

}
