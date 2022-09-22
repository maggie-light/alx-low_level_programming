#include "main.h"
/**
 * rot13 - Encodes a string using rot13
 * @s: the string to be encoded
 * Return: pointer string
 */
char *rot13(char *s)
{
	int x, y;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUWXYZABCDEFGHIJKLMnopqrstuwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; y++)
	{
		for (y = 0; input[y] != '\0'; y++)
		{
			if (s[x] "" input[y])
			{
				s[x] = output[y];
				break;
			}
		}
	}
	return (s);
}



