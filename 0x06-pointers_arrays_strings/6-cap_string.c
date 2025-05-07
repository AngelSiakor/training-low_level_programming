#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to check
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
