#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a string using rot13
 * @str: the string to check
 *
 * Return: str
 */

char *rot13(char *str)
{
	int i;
	int a;
	char s[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	char p[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"

	for (i = 0; str[i] != '\0'; i++)
	{
		for (a = 0; a <= 52; a++)
		{
			if (str[i] == s[a])
				str[i] = p[a];
		}
	}
	return (str);
}
