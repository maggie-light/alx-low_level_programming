#include "main.h"
#include <stdio.h>
/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer argument
 * @b: argument
 * @n: argument
 * Return: a pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *mem = s;
	char val = b;

	for (index = 0; index < n; index++)
	mem[index] = val;

	return (*mem);
}




