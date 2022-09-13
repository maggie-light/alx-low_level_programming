#include "main.h"
/**
 * print_sign(int n) -  function that prints the sign of a number
 * Return: return -1, 0, 1 according to the conditions
 * @n: argument passed
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}


}
