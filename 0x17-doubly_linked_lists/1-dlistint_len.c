#include "lists.h"
#include <stddef.h>

/**
 * size_t dlistint_len - number of the element
 *
 * @h: the head of list
 *
 * Return: the number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	for (i = 0; h!= NULL; n++)
		h = h->next;
	return (n);
}