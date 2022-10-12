#include "function_pointer.h"
/**
 * int_index - searches for and integer
 * @array: array to be searched
 * @size: array size
 * @cmp: pointer
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
