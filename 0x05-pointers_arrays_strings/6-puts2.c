#include "main.h"
/**
 * puts2 -  function that prints every other character of a string
 * @str: str parameter
 */
void puts2(char *str)
{
	int len, i;

	len = str(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

