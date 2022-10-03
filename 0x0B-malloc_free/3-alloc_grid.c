#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: parameter1
 * @height: parameter2
 * Return: return NULL
 */
int **alloc_grid(int width, int height)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}


