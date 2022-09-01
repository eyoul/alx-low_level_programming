#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - all the elements of
 * @h: The double linked list to print
 *
 * Return: the number of the node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n , h->n")
		++len;
		h = h->next;
	}

	return (len);
}
