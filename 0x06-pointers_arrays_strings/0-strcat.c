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
	for (i = 0; src[i] != 0; i++)
	{
		dest[dle] = src[i];
		dle++;
	}
	dest[dle] = '\0';
	return (dest);

}
