#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcat - concatenantes two strings ( dest and src)
 * @dest: the destination string
 * @src:  the source string to append to dest
 *
 * Return: dest
 */


char *_strcat(char *dest, char *src)
{

	int l1;
	int l2;
	int i;

	l1 = strlen(dest);
	l2 = strlen(src);

	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
		_putchar(dest[i]);
	}
	_putchar('\n');

	return (dest);

}

