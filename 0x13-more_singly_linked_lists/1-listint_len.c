#include "lists.h"
#include <stdio.h>
/**
 * listint_len - finds the number of elements in listint_t
 * @h: the listint_t
 * Return: the number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	 size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
