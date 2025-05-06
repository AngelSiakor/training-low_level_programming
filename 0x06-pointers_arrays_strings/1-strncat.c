#include "main.h"
#include <stdio.h>
#include <string.h>


char *_strncat(char *dest, char *src, int n)
{

	int a;
	int i;

	a = strlen(dest);

	for(i= 0; i < n && src[i] != '\0'; i++)
	{
		  dest[a + i] = src[i];
	
	}
	

	return(dest);

}
