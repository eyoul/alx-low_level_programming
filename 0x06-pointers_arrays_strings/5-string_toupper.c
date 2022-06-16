#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  *
  * @str: String to return
  *
  * Return: String
  */

	char *string_toupper(char *)
	{
	
		int i;

		for (i = 0;str[i] != '\0'; i++)
		{
		
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}

	}

	return (str);
}
