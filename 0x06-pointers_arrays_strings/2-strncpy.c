#include <stdio.h>
#include "main.h"
#include <string.h>

char *_strncpy(char *dest, char *src, int n)
{
	for( n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src [n];
	}

	return(dest);

}
