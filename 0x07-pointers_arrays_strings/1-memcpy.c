#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: memory area to be copied to
 * @src: memory area to copied from
 * @n: argument to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		dest[m] = src[m];
	return (dest);
}



