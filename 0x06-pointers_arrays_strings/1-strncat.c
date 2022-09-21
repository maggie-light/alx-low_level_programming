#include "main.h"
#include <string.h>
/**
 * *_strncat - function that concatenates two strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: pointer string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}


