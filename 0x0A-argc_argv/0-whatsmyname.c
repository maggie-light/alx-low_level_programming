#include <stdio.h>
/**
 * main - function that prints its filename
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
