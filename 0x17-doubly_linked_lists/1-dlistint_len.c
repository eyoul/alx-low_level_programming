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

<<<<<<< HEAD
	for (n = 0; h!= NULL; n++)
=======
	for (i = 0; h != NULL; n++)
>>>>>>> b69e464677cb27f307d59e250a71b44ba8c806bf
		h = h->next;
	return (n);
}
