#include "main.h"
#include <stdio.hg

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src);
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
		while (src[j] != '\0')
		{
			*(dest + i) = src[j];
				j++;
				i++;
		}
	}

	*(dest + i) = '\0';
	return (dest);

}
