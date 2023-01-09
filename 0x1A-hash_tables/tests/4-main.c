#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"
/**
 * main - check code
 *
 * Return: always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "C", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Jenny", "and Jay love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterik", "Obelix");
	hash_table_set(ht, "Betty", "Holberton");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "C", "isfun");
	value = hash_table_get(ht, "python");
	printf("%s:%s\n", "python", value);
	value = hash_table_get(ht, "jenny");
	printf("%s:%s\n", "jenny", value);
	value = hash_table_get(ht, "N");
	printf("%s:%s\n", "N", value);
	value = hash_table_get(ht, "Asterik");
	printf("%s:%s\n", "Asterik", value);
	value = hash_table_get(ht, "Betty");
	printf("%s:%s\n", "Betty", value);
	value = hash_table_get(ht, "98", value);
	printf("%s:%s\n", "98", value);
	value = hash_table_get(ht, "C", value);
	printf("%s:%s\n", "C", value);
}
