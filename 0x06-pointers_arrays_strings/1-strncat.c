#include "main.h"
#include <stdio.h>
#include <string.h>


char *_strncat(char *dest, char *src, int n)
{

	int a;
	int i;

	a = strlen(dest);

	for(i= 0; i <= n; i++)
	{
		  dest[a + i] = src[i];
		_putchar(dest[i - 1]);
	
	}
	_putchar('\n');

	return(dest);

}
