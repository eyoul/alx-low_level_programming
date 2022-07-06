#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: array to searches through
 * @size: size of array
 * @cmp: the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		i = 0;
		while (i < size)
		{
			r = cmp(array[i]);
			if (r)
				break;
			i++;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
