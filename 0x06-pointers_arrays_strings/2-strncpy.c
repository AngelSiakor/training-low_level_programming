#include <stdio.h>
#include "main.h"
#include <string.h>

/**
*_strncpy - copies a string
*@dest: the destenation string
* @src: the source sting that's to be copied
*@n: the maximum bytes of character
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int i;

	a = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
