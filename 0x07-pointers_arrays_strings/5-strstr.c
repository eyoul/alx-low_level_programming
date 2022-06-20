#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
	s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			aystack++;
		else
			return (haystack);
	}
	return (NULL);
}

