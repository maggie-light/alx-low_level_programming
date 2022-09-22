#include "main.h"
#include <stdio.h>
/**
 * print_number - Prints an integer
 * @n: the integer to be printed
 * Return: always 0
 */
void print_number(int n)
{
	int p, o, h;

	o = 0;
	p = 1;
	h = n;

	if (n < 0)
	{
		_putchar('-');
		o = 1;
	}
	while (h > 9 || h < -9)
	{
		p *= 10;
		h /= 10;
	}
	while (p > 0)
	{
		if (p > 9)
		{
			if (!o)
				_putchar((n / p % 10) + '0');
			else
				_putchar((n / p % 10) * -1 + '0');

			p /= 10;
		}
		if (p == 1)
		{
			if (o)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			p = 0;
		}
	}
}


