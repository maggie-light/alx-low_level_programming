#include "main.h"
#include <string.h>
/**
 * _strcmp - for comparism
 * @s1: parameter
 * @s2: parameter
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

