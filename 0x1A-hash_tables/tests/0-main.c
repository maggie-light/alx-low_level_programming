#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"
/**
 * main - check code 
 * Return: always success
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_tables_create(1024);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}

