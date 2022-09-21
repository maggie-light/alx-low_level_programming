#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase
 * @X: string parameter
 * Return: string
 */
char *string_toupper(char *X)
{
	int i = 0;

	while (X[i])
	{
		if (X[i] >= 97 && X[i] <= 122)
			X[i] = X[i] - 32;
		i++;
	}
	return (X);
}




