#include "lists.h"
#include <stdio.h>

/**
 * print_
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (h != NULL; h = h->next; count++)
	{
		printf("%d\n", h->n);
	}
	return (count);
}
