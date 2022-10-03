#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: parameter
 * Return: pointer or null
 */
char *_strdup(char *str)
{
	char *mg;
	int i, l;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		l++;
	mg = malloc(sizeof(char) * (l + 1));
	if (mg == NULL)
	return (NULL);
	{
	for (i = 0; str[i]; i++)
		mg[i] = str[i];
	}
	mg[l] = '\0';
	return (mg);
}


