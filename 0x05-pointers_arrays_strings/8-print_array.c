#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: array of integer
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar("%d", a[j]);
		if (j != (n - 1))
		{
			_putchar(", ")
		}
	}
	_putchar("\n");
}

