#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"
/**
 * main - checks code
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	hash_table_t *ht;
	char *key;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "C", "fun");
	hash_table_set(ht, "python", "awesome");
 	hash_table_set(ht, "Jenny", "and Jay love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterik", "Obelix");
	hash_table_set(ht, "Betty", "Holberton");
	hash_table_set(ht, "98", "Battery Streetz");
	key = strdup("tim");
	value = strdup("Britton");
	hash_table_set(ht, key, value);
	key[0] = '\0';
	value[0] = '\0';
	free(key);
	free(value);
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "hetairas", "jenny");
	hash_table_set(ht, "hetairas", "jenny Z");
	hash_table_set(ht, "mentioner", "jenny");
	hash_table_set(ht, "hetairas", "jenny Z chu");
	hash_table_print(ht);
}

