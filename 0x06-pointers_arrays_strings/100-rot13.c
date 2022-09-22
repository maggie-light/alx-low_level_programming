#include "main.h"
/**
 * rot13 - Encodes a string using rot13
 * @str: the string to be encoded
 * Return: pointer string
 */
char *rot13(char *)
{
	int index = 0, index2;
	char alphabet[s2] = {'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L', 
			'M', 'N', 'O', 'P', 'Q', 
			'R', 'S', 'T', 'U', 'W', 'X', 'Y', 'Z', 
			'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 
			'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 
			'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char rot13key[s2] = {

				
