#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints elements of listint_t
 * @h: the pointer
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	printf("%d\n", h->n);
	nodes++;
	h = h->next;
	}

	return (nodes);
}

