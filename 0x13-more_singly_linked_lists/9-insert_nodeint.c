#include "lists.h"
/**
 * *insert_nodeint_at_index -  function that inserts a
 * new node at a given position.
 * @head: pointer
 * @n: the integer
 * @idx: the index
 * Return: NULL or the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == n)
	{
		new->next = copy;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
