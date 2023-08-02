#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: as the first node to start traversing
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}

	return (p);
}
