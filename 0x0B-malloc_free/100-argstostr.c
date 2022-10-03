#include "main.h"
/**
 * len - returns lenght of string
 * @str: parameter2
 * Return: return lenght
 */
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
/**
  * argstostr - function that concatenates all the
  * arguments of your program.
  * @ac: parameter1
  * @av: parameter2
  * Return: pointer to a string or NULL
  */
char *argstostr(int ac, char **av)
{
	char *new_string = NULL;
	int k = 0, i = ac, sum = 0, tmp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac--)
		sum += (len(av[ac]) + 1);
	new_string = (char *) malloc(sum + 1);
	if (new_string != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
				new_string[j + tmp] = av[k][j];
			new_string[tmp + j] = '\n';
			tmp += (j + 1);
			k++;
		}
		new_string[tmp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_string);
}


