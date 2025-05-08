#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix
 * @s: the first string
 * @accept: the second string
 *
 * Return: c
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
			break;
	}
		if (accept[j] == '\0')
		{
			return (c);
		}
		c++;
	}
	return (c);
}
