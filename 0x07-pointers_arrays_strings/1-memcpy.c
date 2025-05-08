#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copy one string to the other
 * @dest: the destination string
 * @src: the string that's being copied
 * @n: the amount to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
