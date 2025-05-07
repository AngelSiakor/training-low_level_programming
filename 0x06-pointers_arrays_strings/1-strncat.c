#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the src string to append to dest
 *@n: The maximum number of bytes from src to append
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int a;
	int i;

	a = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		  dest[a + i] = src[i];
	}

	return (dest);

}
