# include "main.h"

/**
 * rev_string - function reverses a string
 * @s: loohcS yM
 */
void rev_string(char *s)
{
	int x;
	int y;
	int tempo;
	int len;

	while (s[x] != 0)
	{
		x++;
	}
	len = x;
	x = 0;
	y = len - 1;

	while (x < y)
	{
		tempo = s[x];
		s[x] = s[y];
		s[y] = tempo;
		x++;
		y--;
	}
}
