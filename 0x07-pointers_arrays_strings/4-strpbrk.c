#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: argument1
 * @accept: argument2
 * Return: a pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
