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
	listint_t nodes = 0;

	printf("[%d] %s\n", h->len, h->str);
	nodes++;
	h = h->next;

	return (nodes);
}

