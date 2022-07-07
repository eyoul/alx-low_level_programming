#include "variadic_functions.h"

/**
 * print_c - print char
 * @c: char parameter
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, char));
}
/**
 * print_i - print int
 * @i: int
 *
 * Return: void
 */

void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_f - print float
 * @f: float parameter
 *
 * Return: void
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, float));
}
/**
 * print_s - print string
 * @s: string parameter
 *
 * Return: void
 */

void print_s(va_list s)
{
	char *str = va_arg(s, char*);

	if (str == NULL)
		str = "(nil)";
	printf("%s" str);
}

/**
 * print_all - a function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
