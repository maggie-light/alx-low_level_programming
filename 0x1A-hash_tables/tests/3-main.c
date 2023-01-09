#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"
/**
 * main - check code
 * Return: ALways EXIT_SUCCESS.
 */
int main(void)
{
	hash_tables_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	return (EXIT_SUCCESS);
}
