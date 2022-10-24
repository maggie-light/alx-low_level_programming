#include "lists.h"
#include <string.h>
/**
 * *add_nodeint - adds new node at the begining of listint_t
 * @head: a pointer
 * @n: the string to be added
 * Return: address of element or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int len;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	for (len = 0; n[len];)
		len++;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}



