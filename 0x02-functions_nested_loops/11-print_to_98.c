#include <stdio.h>
/**
 * print_to_98 - print all natural number from input to 98 in order separated bya comma followed by a space
 * @n: the number to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)

	{
	while (n > 98)
	printf("%d, ", n--);
	printf("%d\n", n);
	}
	else
	{
	while (n < 98)	
	printf("%d, ", n++);
	printf("%d\n", n);
	}
}	
