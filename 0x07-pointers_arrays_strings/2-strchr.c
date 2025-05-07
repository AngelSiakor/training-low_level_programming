#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: the character
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);
	else
		return (NULL);
}

