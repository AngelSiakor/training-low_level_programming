#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * leet - encodes a string
 * @str: the string to check
 *
 * Return: str
 */

char *leet(char *str)
{
	int i;
	int a;
	char s[10] = "aAeEoOtTlL";
	char p[10] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (a = 0; a < 10; a++)
		{
			if (str[i] == s[a])
				str[i] = p[a];
		}
	}

	return (str);
}
