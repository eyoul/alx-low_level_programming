#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * 
  * Return: char var 
  */

char *string_toupper(char *)
{
	int a;

	for (a = 0; p[a]; a++)
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}
	}
	return (p);
}
