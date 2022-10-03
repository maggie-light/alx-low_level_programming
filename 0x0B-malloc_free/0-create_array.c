#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the momory
 * @c: parameter
 * Return: pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}





