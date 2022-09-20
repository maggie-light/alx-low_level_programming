#include "main.h"
/**
 * rev_string -  function that reverses a string
 * @s: string parameter
 */
void rev_string(char *s)
{
	char tmp;
	int i, lenght1, lenght2;

	lenght = 0;
	lenght = 0;
	while (s[lenght] != '\0')
		lenght++;
	lenght2 = lenght1 - 1;
	for (i = 0; i < lenght1 / 2; i++)
	{
	tmp = s[i];
	s[i] = s[lenght2];
	s[lenght2] = tmp;
	lenght -= 1;
	}
}

