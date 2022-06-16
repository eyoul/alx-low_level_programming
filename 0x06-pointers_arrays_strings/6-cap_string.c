#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @p: capit ...
 *
 * Return: the char value
 */
	char *cap_string(char *p)
	{
	int a = 0, i;
	int b = 13;
	char c[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (p[a])
	{
		i = 0;
		while (i < b)
		{
		if ((a == 0 || p[a - 1] == c[i]) && (p[a] >= 97 && p[a] <= 122))
			p[a] = p[i] - 32;
		i++;
		}
	a++;
	}
	return (p);
	}
