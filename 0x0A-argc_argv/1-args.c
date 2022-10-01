#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argc paramter
 * @argv: an array a a command
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

