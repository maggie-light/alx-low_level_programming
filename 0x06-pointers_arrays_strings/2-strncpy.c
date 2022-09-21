#include "main.h"
/**
 * *_strncpy -  function that copies a string.
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
